#ifndef MyTreeLibrary
#define MyTreeLibrary

//******************************************************//
//***************Библиотека функций*********************//
//******************************************************//

#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string fio[]{"Одинцов Рудольф Лукьянович",   "Терентьев Леонид Евгеньевич",
             "Ильин Бронислав Натанович",    "Алексеев Феликс Миронович",
             "Красильников Сергей Львович",  "Семёнов Александр Филатович",
             "Никитин Тимур Тихонович",      "Быков Осип Станиславович",
             "Васильев Мирон Давидович",     "Меркушев Артур Эльдарович",
             "Носов Адольф Антонович",       "Ларионов Вилли Тарасович",
             "Игнатов Ипполит Донатович",    "Суханов Лавр Владленович",
             "Родионов Назарий Мэлорович",   "Соболев Кирилл Аристархович",
             "Калашников Натан Викторович",  "Антонов Алан Вениаминович",
             "Дьячков Аким Геннадиевич",     "Кулаков Варлам Владиславович",
             "Ситников Клемент Рудольфович", "Рыбаков Никифор Адольфович",
             "Веселов Демьян Давидович",     "Потапов Вячеслав Владленович",
             "Денисов Григорий Егорович",    "Матвеев Матвей Ильяович",
             "Брагин Родион Натанович",      "Колесников Святослав Богданович",
             "Горшков Денис Олегович",       "Евдокимов Захар Авксентьевич"};

string spec[]{"Программист", "Электрик", "Инженер", "Доктор"};

struct Data {
  string fio;
  double tabel_num;
  int experience;
  int salary;
  string speciality;
};

struct Tree {
  Data data;
  Tree *parent;
  Tree *left;
  Tree *right;
};

//Проверка преобразования данных string в int
// 1 - ok, 0 - not ok.
int correct_num(string num) {
  for (int i = 0; i < num.length(); i++) {
    if ((num[i] < '0' || num[i] > '9'))
      return 0;
  }
  return 1;
}

//Добавление в дерево узла. Дерево может быть пустым или не пустым.
Tree *addNode(Tree *tree, Tree *parent, Data d) {
  //Дерево пустое...
  if (tree == NULL) {
    tree = new Tree();
    tree->data = d;
    tree->parent = parent;
    tree->left = NULL;
    tree->right = NULL;
  }
  //Дерево не пустое...
  else {
    (tree->data.tabel_num > d.tabel_num)
        ? tree->left = addNode(tree->left, tree, d)
        : tree->right = addNode(tree->right, tree, d);
  }

  return tree;
}

//Поиск узла по ключу
Tree *find(Tree *tree, int key) {
  //Если дерево пустое - значит искомого узла не существует
  if (tree == NULL) {
    cout << "Node no found\n";
    return NULL;
  }

  //При нахождении - вернуть узел
  if (tree->data.tabel_num == key) {
    return tree;
  }

  //Если искомое знач. меньше текущего в узле - искать в левом потомке, иначе -
  //в правом.
  return ((tree->data.tabel_num > key) ? find(tree->left, key)
                                       : find(tree->right, key));
}

//Удаление узла по ключу
Tree *deleteNode(Tree *tree, int key) {

  //Поиск искомого узла...
  Tree *deletedTree = find(tree, key);

  // 1. Нет дерева по ключу
  if (deletedTree == NULL) {
    return tree;
  }

  // 2. Дерево состоит из одного узла
  if (deletedTree->parent == NULL && deletedTree->right == NULL &&
      deletedTree->left == NULL)
    return NULL;

  // 3. У дерева нет потомков OK
  if (deletedTree->left == NULL && deletedTree->right == NULL) {
    //Если ключ меньше родительского значение - удалить левого потомка родителя,
    //иначе - правого
    (deletedTree->parent->data.tabel_num < key)
        ? (deletedTree->parent->right = NULL)
        : (deletedTree->parent->left = NULL);
    return tree;
  }

  // 4. У дерева нет правого потомка.
  if (deletedTree->right == NULL) {
    Tree &delNodeRef = *find(
        tree, deletedTree->data
                  .tabel_num); //Ссылка на удаляемый узел, чтобы его изменить
    Tree *tempTree = deletedTree->left;
    delNodeRef.data = tempTree->data;
    delNodeRef.left = tempTree->left;
    delNodeRef.right = tempTree->right;
    delete tempTree;
    return tree;
  }

  // 5. У дерева есть правый потомок у которого нет левого потомка.
  if (deletedTree->right != NULL && deletedTree->right->left == NULL) {

    Tree &delNodeRef = *find(
        tree, deletedTree->data
                  .tabel_num); //Ссылка на удаляемый узел, чтобы его изменить

    Tree *tempTree = delNodeRef.right;

    delNodeRef.right = tempTree->right;
    delNodeRef.data = tempTree->data;

    delete tempTree;
    return tree;
  }

  // 6.У дерева есть правый потомок у которого есть левый потомок.
  if (deletedTree->right->left != NULL) {
    Tree *tempTree =
        deletedTree->right
            ->left; // Переменная для нахождения крайнего левого потомка

    while (tempTree->left != NULL) {
      Tree *superTempTree = tempTree->right;
      tempTree = superTempTree->left;
    }

    Tree &delNodeRef =
        *find(tree, deletedTree->data.tabel_num); //Ссылка на удаляемый узел
    delNodeRef.data = tempTree->data;

    // 6.1. У крайнего левого потомка может быть правый потомок,
    //который нужно перенести на место перемещённого корня
    if (tempTree->right != NULL) {
      Tree &rightTreeOfDel = *find(
          tree, deletedTree->right->data
                    .tabel_num); // Ссылка на правого потомка удаляемого узла
      rightTreeOfDel.left = tempTree->right;
    } else {
      Tree &rightTreeOfDel = *find(tree, deletedTree->right->data.tabel_num);
      rightTreeOfDel.left = NULL;
    }
    return tree;
  }
  return tree;
}

//Функция вывода дерева в ширину
void depthTravel(Tree *tree) {
  if (tree == NULL) {
    return;
  }
  vector<Tree *> turnForPrint;
  turnForPrint.push_back(tree);
  int i = 1;
  while (!(turnForPrint.empty())) {
    cout << i << ". ";
    i++;

    Tree *temp = turnForPrint[0];
    turnForPrint.erase(turnForPrint.begin());

    cout << temp->data.tabel_num << " ФИО: " << temp->data.fio
         << " Спец: " << temp->data.speciality
         << "\nСтаж: " << temp->data.experience
         << " Оклад: " << temp->data.salary << '\n';

    if (temp->left != NULL) {
      turnForPrint.push_back(temp->left);
    }
    if (temp->right != NULL) {
      turnForPrint.push_back(temp->right);
    }
  }  
  cout << "\n";
}

//сверху-вниз в прямом порядке
void top_down_pryam(Tree *tree) {
  if (tree != NULL) {
    cout << tree->data.tabel_num << ", ";
    top_down_pryam(tree->left);
    top_down_pryam(tree->right);
  }
}

//сверху-вниз в симметричном порядке + по возрастанию
void top_down_sim(Tree *tree) {
  if (tree != NULL) {
    top_down_sim(tree->left);
    cout << tree->data.tabel_num << ", ";
    top_down_sim(tree->right);
  }
}

//сверху-вниз в обратном порядке
void top_down_revers(Tree *tree) {
  if (tree != NULL) {
    top_down_revers(tree->left);
    top_down_revers(tree->right);
    cout << tree->data.tabel_num << ", ";
  }
}

//От максимального к минимуму
void max_min(Tree *tree) {
  if (tree != NULL) {
    max_min(tree->right);
    cout << tree->data.tabel_num << ", ";
    max_min(tree->left);
  }
}

//Удалить все элементы, у которых "специальность" совпадает с заданным значением
//специальности. Рекурсивное удаление всех элементов с задананной
//специальностью.
void search_spec(Tree *root, Tree *tree, string spec) {

  if (tree != NULL) {
    search_spec(root, tree->right, spec);
    search_spec(root, tree->left, spec);
    if (tree->data.speciality == spec) {
      cout << tree->data.fio << " - " << tree->data.speciality << " с номером "
           << tree->data.tabel_num << " был удалён\n";
      deleteNode(root, tree->data.tabel_num);
    }
  }
}

//Загружает из "файла" M элементов
Data load_at_file(int m, int show_names, int random_tabel_num) {
  Data tempdata;
  tempdata.experience = rand() % 20 + 1;
  tempdata.salary = rand() % 1000000 + 1000;
  (random_tabel_num) ? (tempdata.tabel_num = pow(10, (rand() % 3 + 1)) + m)
                     : (tempdata.tabel_num = 100 + m);
  tempdata.fio = fio[m % 30];
  tempdata.speciality = spec[rand() % 4];
  if (show_names)
    cout << m + 1 << ". "
         << "Спец.: " << tempdata.speciality
         << ", Табельный номер : " << tempdata.tabel_num << "\n\t"
         << "фио: " << tempdata.fio << "\n\n";

  return tempdata;
}

#endif
