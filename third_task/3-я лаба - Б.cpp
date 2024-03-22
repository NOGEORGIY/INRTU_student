#include <iostream>
#include <sstream>
using namespace std;

int intInputFromConsole(string mess, string err, int min, int max) {
  int curNumber = 0;
  string line;
  cout << mess;

  while (getline(cin, line)) {
    stringstream ss(line);
    if (ss >> curNumber) {
      if (ss.eof()) {
        if (curNumber >= min && curNumber <= max) {
          return curNumber;
        }
      }
    }
    cout << err << "\n";
  }
}

void checkerMatrix(int **relation, int n) {
  for (int i = 0; i < n; i++) {
    relation[i] = new int[n];
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      relation[i][j] = a;
    }
  }

  bool checkchek = true; //Переменная для того, чтобы выйти из вложенного цикла
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (relation[i][j] != 1 && relation[i][j] != 0) {
        cout << "Ошибка ввода матрицы, попробуйте снова\n";
        cout << "Неверное число: " << relation[i][j] << '\n';
        checkerMatrix(relation, n);
        checkchek = false;
        break;
      }
    }
    if (checkchek == false)
      break;
  }
}

int main() {
  setlocale(LC_ALL, "ru");
  int n;
  cout << "Элементов в множесетве будет: ";
  n = intInputFromConsole("", "erorr", 1, 10);

  int **relation = new int *[n];

  cout << "Введите бинарные отношения для матрицы (" << n << "x" << n << "):"
       << "\n";
  checkerMatrix(relation, n);

  // for (int i = 0; i < n; i++)
  //{
  //     relation[i] = new int[n];
  //     for (int j = 0; j < n; j++)
  //     {
  //         relation[i][j] = intInputFromConsole("", "Ошибка, введите ещё
  //         раз:\n", 0, 1);
  //     }
  // }

  //проверка на рефлексивность

  bool reflex = true;
  for (int i = 0; i < n; i++) {
    if (relation[i][i] != 1) {
      reflex = false;
      break;
    }
  }

  //проверка на симметричность
  bool symetr = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; i < n; i++) {
      if (relation[i][j] != relation[j][i]) {
        symetr = false;
        break;
      }
    }
    if (symetr == false)
      break;
  }

  //проверка на транзитивность
  bool tran = true;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (relation[i][j] == 1 && relation[j][k] == 1 && relation[i][k] != 1) {
          tran = false;
          break;
        }
      }
      if (tran == false)
        break;
    }
    if (tran == false)
      break;
  }

  cout << "Матрица бинарных отношений: \n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << relation[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n\n\n";
  cout << (reflex ? "бинарное отношение рефлексивно!!!\n"
                  : "бинарное отношение не рефлексивно.\n");
  cout << (symetr ? "бинарное отношение симметрично!!!\n"
                  : "бинарное отношение не симметрично.\n");
  cout << (tran ? "бинарное отношение транзитивно!!!\n"
                : "бинарное отношение не транзитивно.\n");
  cout << ((tran && symetr && reflex)
               ? "бинарное отношение эквивалентно!!!\n"
               : "бинарное отношение не эквивалентно.\n");

  for (int i = 0; i < n; i++) {
    delete[] relation[i];
  }
  delete[] relation;

  return 0;
}