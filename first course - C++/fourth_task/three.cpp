#include <algorithm>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
//извините.
using namespace std;

const int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//структура футбольной команды
struct Football_chel {
  string number_of_player;
  string last_name;
  string first_name;
  vector<pair<string, string>> clubs_seasons;
  string date_of_birth;
  unsigned int killed_balls;
};

//сумма дней прошедштх месяцев
int days_in_month(int month) {
  int count_days = 0;
  for (int i = month; i > 0; i--) {
    count_days += month_days[i - 1];
  }
  return count_days;
};

//проверка корректности введеной даты
bool check_correct_date(string date) {
  int numb[20]; // 20 - на всякий случай
  stringstream ss(date);
  string item;
  int i = 0;
  while (getline(ss, item, '.')) {
    numb[i] = stoi(item); // stoi - перевод string в int
    i++;
  }

  if (i != 3)
    return false;

  bool check_day = false;
  for (int i = 1; i < 32; i++) {
    if (numb[0] == i) {
      check_day = true;
      break;
    }
  }
  if (check_day == false)
    return false;

  bool check_month = false;
  for (int i = 1; i < 13; i++) {
    if (numb[1] == i) {
      check_month = true;
      break;
    }
  }
  if (check_month == false)
    return false;

  return true;
}

//подсчёт количества дней по дате
int counting_days(string date) {
  int numb[3];
  stringstream ss(date);
  string item;
  int i = 0;
  while (getline(ss, item, '.')) {
    numb[i] = stoi(item); // stoi - перевод string в int
    i++;
  }
  int year = numb[2];
  int month = numb[1];
  int day = numb[0];
  return ((year - 1) * 365 + days_in_month(month - 1) + day);
};

//Вывод списка игроков, рассортированных по датам их рождения
void list_of_players_by_date(vector<Football_chel> Player, int num_of_players) {
  vector<vector<string>> team_for_list;

  for (int i = 0; i < num_of_players; i++) {
    vector<string> temp;

    //заполнение вектора пустыми элементами, чтобы к нему можно было обращаться
    //по индексу
    for (int k = 0; k < 4; k++) {
      temp.push_back("");
    }

    temp[0] = Player[i].number_of_player;
    temp[1] = Player[i].last_name;
    temp[2] = Player[i].first_name;
    temp[3] = Player[i].date_of_birth;

    team_for_list.push_back(temp);
  }

  vector<string> temp;
  //заполнение вектора пустыми элементами, чтобы к нему можно было обращаться по
  //индексу
  for (int k = 0; k < 100; k++) {
    temp.push_back("");
  }

  //Сортировка пузырьком как в методичке
  for (int i = 0; i < num_of_players - 1; i++) {
    for (int j = 0; j < num_of_players - i - 1; j++) {
      if (counting_days(team_for_list[j][3]) >
          counting_days(team_for_list[j + 1][3])) {
        // меняем элементы местами

        for (int faq = 0; faq < 4; faq++) {
          temp[faq] = team_for_list[j][faq];
          team_for_list[j][faq] = team_for_list[j + 1][faq];
          team_for_list[j + 1][faq] = temp[faq];
        }
      }
    }
  }
  //вывод элементов
  for (unsigned i{}; i < num_of_players; i++) {
    cout << i + 1 << '.' << ' ' << team_for_list[i][0] << ' '
         << team_for_list[i][1] << ' ' << team_for_list[i][2] << ' '
         << team_for_list[i][3] << '\n';
  }
  cout << "\n\n\n";
};

//вывод списка игроков, против которых играл player_last_name
void opposing_players_on_a_team(vector<Football_chel> Player,
                                int num_of_players) {
  string last_name_for_func;
  int count = 0;
  Football_chel player_with_this_last_name;
  Football_chel null_mass;
  vector<Football_chel> player_without_last_name;

  //заполнение вектора пустыми элементами, чтобы к нему можно было обращаться по
  //индексу(опять)
  for (int k = 0; k < num_of_players + 10; k++) {
    player_without_last_name.push_back(null_mass);
  }

  cout << "Введите фамилию игрока, чтобы узнать кто играл против него хотя бы "
          "один сезон. \n";
  cin >> last_name_for_func;

  //поиск нужного игрока по фамилии и создание массива остальных игроков
  for (int i = 0; i < num_of_players; i++) {
    if (Player[i].last_name == last_name_for_func) {
      player_with_this_last_name.first_name = Player[i].first_name;
      player_with_this_last_name.last_name = Player[i].last_name;
      player_with_this_last_name.clubs_seasons = Player[i].clubs_seasons;
    }
    if (Player[i].last_name != last_name_for_func) {
      Football_chel temp;
      temp.first_name = Player[i].first_name;
      temp.last_name = Player[i].last_name;
      temp.clubs_seasons = Player[i].clubs_seasons;

      player_without_last_name[count] = temp;
      count = count + 1;
    }
  }
  for (int i = 0; i < num_of_players - 1; i++) {
    for (int j = 0; j < player_without_last_name[i].clubs_seasons.size(); j++) {
      for (int k = 0; k < player_with_this_last_name.clubs_seasons.size();
           k++) {
        if ((player_without_last_name[i].clubs_seasons[j].second ==
             player_with_this_last_name.clubs_seasons[k].second) &&
            (player_without_last_name[i].clubs_seasons[j].first !=
             player_with_this_last_name.clubs_seasons[k].first)) {
          cout << player_with_this_last_name.first_name << ' '
               << player_with_this_last_name.last_name << "("
               << player_with_this_last_name.clubs_seasons[k].first << ")"
               << ' ' << "был оппонетом игрока "
               << player_without_last_name[i].first_name << ' '
               << player_without_last_name[i].last_name << "("
               << player_without_last_name[i].clubs_seasons[k].first << ")"
               << "в " << player_with_this_last_name.clubs_seasons[k].second
               << "-ом сезоне в составе клуба " << '\n';
        }
      }
    }
  }
  cout << "\n\n\n";
};

//подсчёт игроков, которые играли в одном клубе в разных сезонах
void players_club(vector<Football_chel> Player, int num_of_players) {
  set<string> names;
  for (int i = 0; i < num_of_players; i++) {
    for (int j = 0; j < Player[i].clubs_seasons.size(); j++) {
      for (int k = j + 1; k < Player[i].clubs_seasons.size(); k++) {
        if (Player[i].clubs_seasons[j].first ==
                Player[i].clubs_seasons[k].first &&
            Player[i].clubs_seasons[j].second !=
                Player[i].clubs_seasons[k].second) {
          names.insert(Player[i].last_name);
        }
      }
    }
  }
  cout << "количество игроков, которые играли в одном клубе в разные сезоны: "
       << names.size() << "\n";
};

//Создание нового игрока
Football_chel createPeople() {
  Football_chel people;
  vector<string> num_of_seasons;

  cout << "Создание нового игрока. \n";
  cout << "Введите номер игрока:     ";
  cin >> people.number_of_player;
  cout << "\nВведите имя игрока:     ";
  cin >> people.first_name;
  cout << "\nВведите фамилию игрока:     ";
  cin >> people.last_name;
  cout << "\nВведите дату рождения игрока в формате XX.XX.XXXX:     ";

  string date = "";
  cin >> date;
  while (!(check_correct_date(date))) {
    cout << "Ввод неккоретный, введите заново.\n";
    cin >> date;
  }

  people.date_of_birth = date;

  cout << "\nЧисло забитых игроком мячей:     ";
  cin >> people.killed_balls; //тут можно сделать проверку на тип данных

  cout << "\nВ каких клубах состоял игрок?";
  cout << "\nВведите в формате <номер_сезона название_клуба> с пробелом без "
          "скобок";
  cout << "\nДля прекращения ввода введите <fin fin>\n";

  int endooo = 1; //перменная для проверки введены ли все клубы+сезоны
  while (endooo != 0) {
    pair<string, string> clubs;

    bool cheker = true;

    string num;
    string club;

    cin >> num;
    cin >> club;

    if (num == "fin" && club == "fin") {
      endooo = 0;
      continue;
    }

    for (int i = 0; i < num_of_seasons.size(); i++) {
      if (num == num_of_seasons[i]) {
        cout << "\n Игрок не может учавстовать в двух клубах за один сезон! "
                "Введите заново. \n";
        cheker = false;
      }
    }

    clubs.first = club;
    clubs.second = num;
    num_of_seasons.push_back(num);
    if (cheker == true) {
      people.clubs_seasons.push_back(clubs);
    }
  }
  cout << "\n Игрок создан и добавлен в массив \n";
  return people;
};

int main() {
  setlocale(LC_ALL, "Russian");
  Football_chel John{
      "0001",
      "Raport",
      "John",
      {{"A-Club", "1"}, {"A-Club", "2"}, {"G-Club", "3"}, {"H-Club", "4"}},
      "08.09.2000",
      154};
  Football_chel Robert{"0002",       "Heinsberg",
                       "Robert",     {{"B-Club", "1"}, {"B-Club", "2"}},
                       "23.11.1998", 80};
  Football_chel Erwin{"0003",       "Soyer",
                      "Erwin",      {{"C-Club", "1"}, {"C-Club", "2"}},
                      "12.03.1990", 143};
  Football_chel Jack{"0004",       "Rukio",
                     "Jack",       {{"A-Club", "1"}, {"A-Club", "2"}},
                     "26.10.1998", 22};
  Football_chel George{
      "0005",       "Potter",
      "George",     {{"C-Club", "1"}, {"R-Club", "2"}, {"D-Club", "3"}},
      "12.07.2005", 14};
  Football_chel Morg{
      "0006",
      "Morg",
      "Kolorg",
      {{"C-Club", "1"}, {"B-Club", "2"}, {"D-Club", "3"}, {"G-Club", "4"}},
      "12.07.1987",
      34};

  //Создание массива структуры.
  vector<Football_chel> Player = {John, Robert, Erwin, Jack, George, Morg};

  //Добавление новых игроков.
  while (1) {
    string C;
    cout << "Игроков в массиве сейчас: " << Player.size() << "\n";
    cout << "Хотите ли вы создать нового игрока? Y/N\n";
    cin >> C;
    if (C == "N" || C == "n")
      break;
    Player.push_back(createPeople());
  }

  cout << "Хотите ли вы добавить игроков из текстового файла? Y/N\n";
  string C;
  cin >> C;
  if (!(C == "N" || C == "n")) {
    ifstream in; //открывает файл
    in.open("players.txt");
    if (in.is_open()) {
      while (!in.eof()) {
        Football_chel people;
        vector<string> num_of_seasons;

        in >> people.number_of_player;
        in >> people.first_name;
        in >> people.last_name;
        in >> people.date_of_birth;
        in >> people.killed_balls;

        int endooo = 1;
        while (endooo != 0) {
          pair<string, string> clubs;
          bool cheker = true;
          string num;
          string club;
          in >> num;
          in >> club;
          if (num == "fin" && club == "fin") {
            endooo = 0;
            continue;
          }

          for (int i = 0; i < num_of_seasons.size(); i++) {
            if (num == num_of_seasons[i]) {
              cout << "\n err\n";
              cheker = false;
            }
          }

          clubs.first = club;
          clubs.second = num;
          num_of_seasons.push_back(num);
          if (cheker == true) {
            people.clubs_seasons.push_back(clubs);
          }
        }
        Player.push_back(people);
      }
    } else {
      cout << "Файл не удалось открыть(\n\n\n";
    }
  }
  cout << "Список игроков, рассортированных по дате рождения: \n";
  list_of_players_by_date(Player, Player.size());

  cout << "Проверка по фамилии:\n";
  opposing_players_on_a_team(Player, Player.size());
  players_club(Player, Player.size());
}