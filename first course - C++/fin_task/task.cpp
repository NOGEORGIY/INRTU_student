//10-вариант
#include <algorithm>
#include <iostream>
#include <set>
//#include <map>
#include <vector>

using namespace std;

//Стркутура с заданными элементами
struct University {
  string name;
  int rank;
  string town;
};

//Сортировка вставками для вектора
vector<University> sort_my_vector(vector<University> list_of_uni) {
  for (int i = 1; i < list_of_uni.size(); i++)
    for (int j = i; j > 0 && list_of_uni[j - 1].rank > list_of_uni[j].rank; j--)
      swap(list_of_uni[j - 1], list_of_uni[j]);
  return list_of_uni;
}

//Показать вектор
void show_my_vector_please(vector<University> list_of_uni) {
  for (int i = 0; i < list_of_uni.size(); i++) {
    cout << "Название: " << list_of_uni[i].name << "\n";
    cout << "Рейтинг: " << list_of_uni[i].rank << "\n";
    cout << "Город: " << list_of_uni[i].town << "\n\n";
  }
}


//Счетчик вузов с рангом выше заданного
int CountRankHighest(vector<University> list_of_uni, int rankr) {
  return count_if(list_of_uni.begin(), list_of_uni.end(),
                  [rankr](const University &it) { return it.rank > rankr; });
}

//удаление всех записей вузов для заданного города
vector<University> delete_this_town_pls(vector<University> list_of_uni,
                                        string namer) {
  auto iter =
      remove_if(list_of_uni.begin(), list_of_uni.end(),
                [namer](const University &it) { return it.town == namer; });
  list_of_uni.erase(iter, list_of_uni.end());
  return list_of_uni;
}

auto comparat = [](University a, University b){return a.rank < b.rank;};

int main() {
  vector<University> list_of_uni;
  list_of_uni.push_back({"IRNTU", 1, "Irkutsk"});
  list_of_uni.push_back({"IRNTU234", 4, "Moscow"});
  list_of_uni.push_back({"IRNTU4", 2, "Japan"});
  list_of_uni.push_back({"IRNTU32234", 13, "Irkutsk"});
  list_of_uni.push_back({"IRNTU12321", 9, "Moscow"});
  list_of_uni.push_back({"IU", 5, "Japan"});
  list_of_uni.push_back({"other", 999, "unknown"});

  cout << "Вектор до сортировки: \n";
  show_my_vector_please(list_of_uni);

  list_of_uni = sort_my_vector(list_of_uni);
  cout << "Вектор после сортировки: \n";
  show_my_vector_please(list_of_uni);

  //Такое же было у меня в шестой лабе(почти)!
  set<University, decltype(comparat)> set_of_uni(comparat);
  for (int i = 0; i < list_of_uni.size(); i++){
    set_of_uni.insert(list_of_uni[i]);
  }

  cout << "Вывод set: \n\n";
  
  for (auto n : set_of_uni) {
    cout << "Название: " << n.name << "\n";
    cout << "Рейтинг: " << n.rank << "\n";
    cout << "Город: " << n.town << "\n\n";
  }
  
  cout << "\n\n подсчет вузов с рангом выше заданного(5):  ";
  cout << CountRankHighest(list_of_uni, 5) << "\n\n";

  //Удаление всех записей с Irkutsk
  list_of_uni = delete_this_town_pls(list_of_uni, "Irkutsk");
  cout << "\n\n Вывод вектора(с удалением записей для Иркутска)\n";
  show_my_vector_please(list_of_uni);
}
