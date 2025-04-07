#include "MyTreeLibrary.h"

//******************************************************//
//**************Тестирование программы******************//
//******************************************************//

//Тестирование добавления элемента и вывод от максимального элемента к
//минимальному
void test_add_elem_in_tree() {

  cout << "Тестирование добавления элемента и вывода от максимального элемента "
          "к минимальному.\n\n\n";
  cout << "Добавим три узла в дерево: \n";
  Tree *root = addNode(NULL, NULL, load_at_file(0, 1, 1));
  addNode(root, NULL, load_at_file(1, 1, 1));
  addNode(root, NULL, load_at_file(2, 1, 1));
  cout << "\nВывод от максимального к минимальному: ";
  max_min(root);
  cout << "\nСоздадим ещё один узел: ";
  addNode(root, NULL, load_at_file(3, 1, 1));
  cout << "\nВывод от максимального к минимальному: ";
  max_min(root);
  cout << "\n\n";
}

//Тестирование удаления элемента и вывод от минимального элемента к
//максимальному
void test_delete_elem_in_tree() {
  cout << "Тестирование удаления элемента и вывода от минимального элемента к "
          "максимальному.\n\n";
  cout << "Добавим три узла в дерево: \n";
  Tree *root = addNode(NULL, NULL, load_at_file(0, 1, 0));
  addNode(root, NULL, load_at_file(1, 1, 0));
  addNode(root, NULL, load_at_file(2, 1, 0));

  cout << "\nВывод от минимального элемента к максимальному(симметричный "
          "вывод): ";
  top_down_sim(root);

  cout << "\nУдалим узел 102: ";
  deleteNode(root, 102);

  cout << "\nВывод от минимального элемента к максимальному(симметричный "
          "вывод): ";
  top_down_sim(root);
  cout << "\n\n";
}

//Тестирование поиска элемента
void test_search_element() {
  cout << "Тестирование поиска элемента.\n\n";
  cout << "\nСоздадим 10 узлов дерева: \n";

  Tree *root = addNode(NULL, NULL, load_at_file(0, 1, 1));
  addNode(root, NULL, load_at_file(1, 1, 0));

  for (int m = 2, n = 10; n != m; m++) {
    addNode(root, NULL, load_at_file(m, 1, 1));
  }

  cout << "\n\n Ищем ФИО специалиста с табельным номером 101: \n";

  Tree *spec_with_101_num = find(root, 101);
  cout << spec_with_101_num->data.fio << "\n\n";
}

//Тестирование удаления всех элементов с заданной специализацией
void test_delete_all_specialization_el() {
  cout << "Тестирование удаления всех элементов с заданной специализацией и "
          "оставшихся выводов.\n\n";
  cout << "\nСоздадим 10 узлов дерева: \n";

  Tree *root = addNode(NULL, NULL, load_at_file(0, 1, 1));

  for (int m = 1, n = 9; n != m; m++) {
    addNode(root, NULL, load_at_file(m, 1, 1));
  }

  Data my_data; //На случай, если электрик не создастся случайно
  my_data.fio = "Григорий Распутин Максимович";
  my_data.tabel_num = 9999;
  my_data.speciality = spec[1];
  addNode(root, NULL, my_data);
  cout << 10 << ". "
       << "Спец.: " << my_data.speciality
       << ", Табельный номер : " << my_data.tabel_num << "\n\t"
       << "фио: " << my_data.fio << "\n\n";

  cout << "\nУдалим все элементы со специальностью Электрик: \n";
  search_spec(root, root, "Электрик");
  cout << "\n\n";

  cout << "\n\nВсе табельные номера в обратном порядке: ";
  top_down_revers(root);

  cout << "\n\nВсе табельные номера в прямом порядке: ";
  top_down_pryam(root);

  cout << "\n\nВсе табельные номера в ширину: \n";
  depthTravel(root);
}

void test_consol() {

  cout << "Консольный ввод.\n";
  int no_stop = 1;

  Tree *test_tree = NULL;

  while (no_stop) {
    cout << "Доступные команды:\n";
    cout << "[0] Загрузить элементы из файла\n";
    cout << "[1] Добавить элемент\n";
    cout << "[2] Удалить элемент\n";
    cout << "[3] Найти элемент\n";
    cout << "[4] Удалить все элементы с заданной специализацией\n";
    cout << "[5] Вывод элементов\n";
    cout << "[6] Выход\n";

    string choice_for_;
    int choice_for_consol;

    cout << "Введите правильный номер команды\n\n";
    cin >> choice_for_;

    if (!(correct_num(choice_for_))) {
      choice_for_consol = 1012102;
    } else {
      choice_for_consol = stoi(choice_for_);
    }

    //Загрузка элементов из файла
    if (choice_for_consol == 0) {
      cout << "Введите путь к файлу(уже доступен файл tree.txt)\n";

      string datafile;
      cin >> datafile;

      ifstream file(datafile);
      if (file.is_open()) {

        string namef, specf, tab_n, sal, exp;

        while (file >> namef >> specf >> tab_n >> sal >> exp) {
          Data fileData;

          if (correct_num(tab_n) && correct_num(exp) && correct_num(sal)) {
            fileData.experience = stoi(exp);
            fileData.tabel_num = stoi(tab_n);
            fileData.salary = stoi(sal);
            fileData.fio = namef;
            fileData.speciality = specf;
            test_tree = addNode(test_tree, test_tree, fileData);
            cout << "Добавлен элемент: \n";
            cout << fileData.fio << " "
                 << "с номером " << fileData.tabel_num << " Специальности "
                 << fileData.speciality << "\n\n";
          } else {
            cout << "Некорректный ввод данных, узел будет пропущен\n\n";
          }
          //обнуляем переменные для следующей даты
          tab_n = sal = exp = "";
          namef = specf = "";
        }
      } else {
        cout << "Файла не существует\n\n";
      }
    }

    //Добавление элемента
    else if (choice_for_consol == 1) {
      cout << "Введите данные элемента через пробел\n";
      cout << "Фамилия.И.О. Специальность Табельный_номер Зарплата Стаж\n";
      string namef, specf, tab_n, sal, exp;
      cin >> namef >> specf >> tab_n >> sal >> exp;
      if (correct_num(tab_n) && correct_num(exp) && correct_num(sal)) {
        Data fileData;
        fileData.experience = stoi(exp);
        fileData.tabel_num = stoi(tab_n);
        fileData.salary = stoi(sal);
        fileData.fio = namef;
        fileData.speciality = specf;
        test_tree = addNode(test_tree, test_tree, fileData);

        cout << "Добавлен элемент: \n";
        cout << fileData.fio << " "
             << "с номером " << fileData.tabel_num << " Специальности "
             << fileData.speciality << "\n\n";
      } else {
        cout << "Некорректный ввод данных, узел будет пропущен\n\n";
      }
    }

    //Удаление элемента
    else if (choice_for_consol == 2) {
      cout << "Введите номер элемента для удаления\n";

      int num_for_del_tree;
      cin >> num_for_del_tree;

      Tree *deldeldel = find(test_tree, num_for_del_tree);
      if (deldeldel != NULL) {
        deleteNode(test_tree, num_for_del_tree);
        cout << "Узел под номером " << num_for_del_tree << " удален\n\n";
      }
      delete deldeldel;
    }

    //Поиск элемента
    else if (choice_for_consol == 3) {
      cout << "Введите номер элемента для поиска\n";

      int num_for_find_tree;
      cin >> num_for_find_tree;

      Tree *findfindfind = find(test_tree, num_for_find_tree);
      if (findfindfind != NULL) {

        cout << "Фио узла под номером " << num_for_find_tree << ": "
             << findfindfind->data.fio << "\n\n";
      }
    }

    //Удаление всех элементов с заданной специализацией
    else if (choice_for_consol == 4) {
      cout << "Введите специальность для удаления\n";
      string specspec;
      cin >> specspec;

      search_spec(test_tree, test_tree, specspec);
      cout << "Все элементы с заданной специальностью удалены\n\n";
    }

    //Вывод деревьев
    else if (choice_for_consol == 5) {
      cout << "Доступные выводы:\n";
      cout << "[1] В ширину\n";
      cout << "[2] В прямом порядке\n";
      cout << "[3] В симметричном порядке + по возрастанию\n";
      cout << "[4] В обратном порядке\n";
      cout << "[5] От максимального к минимуму\n";

      int vivods;
      cin >> vivods;

      switch (vivods) {
      case 1:
        cout << "Вывод в ширину\n";
        depthTravel(test_tree);
        break;
      case 2:
        cout << "Вывод в прямом порядке\n";
        top_down_pryam(test_tree);
        break;
      case 3:
        cout << "Вывод в симметричном порядке + по возрастанию\n";
        top_down_sim(test_tree);
        break;
      case 4:
        cout << "Вывод обратном порядке\n";
        top_down_revers(test_tree);
        break;
      case 5:
        cout << "Вывод от максимального к минимуму\n";
        max_min(test_tree);
        break;

      default:
        break;
      }
      cout << "\n\n";
    }

    //Выход
    else if (choice_for_consol == 6) {
      cout << "Выход из меню команд\n";
      delete test_tree;
      return;
    }

    else {
      cout << "Неверный ввод команды\n";
    }
  }
}

int main() {
  setlocale(LC_ALL, "Russian");
  srand(time(NULL));

  cout << "Какой тест вы хотите провести?\n";
  cout << "[1] Тестирование добавления элемента и вывод от максимального "
          "элемента к минимальному\n";
  cout << "[2] Тестирование удаления элемента и вывод от минимального элемента "
          "к максимальному\n";
  cout << "[3] Тестирование поиска элемента\n";
  cout
      << "[4] Тестирование удаления всех элементов с заданной специализацией\n";
  cout << "[5] Ручной ввод\n";
  cout << "Введите число от 1 до 5\n";

  int choise;
  cin >> choise;

  switch (choise) {
  case 1:
    test_add_elem_in_tree();
    break;
  case 2:
    test_delete_elem_in_tree();
    break;
  case 3:
    test_search_element();
    break;
  case 4:
    test_delete_all_specialization_el();
    break;
  case 5:
    test_consol();
    break;
  default:
    cout << "Некорректный ввод\n";
    break;
  }

  cout << "Ещё раз? (1/0)";
  int yes;
  cin >> yes;
  if (yes)
    main();
  return (0);
}