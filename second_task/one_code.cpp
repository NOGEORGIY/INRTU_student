

#include <cmath>
#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main() {
  cout << "calculator function ln((x + 1) / (x - 1))\n";
  float x, eps, sum = 0, powx, u = 1;
  int n = 0;
  int k = 0;
  float dx1 = -0.1e8, dx2 = 0.1e8, deps1 = 0.1e-20, deps2 = 1;

  // eps - погрешность
  // sum - начальная сумма
  // k - количество итераций для for
  // powx - накопление степеней x в знаменателе
  // n - количество итераций
  // u - очередное слагаемое

  // dx1, dx2 - диапозон значений x
  // deps1, deps2 - диапозон значений eps

  //циклическая проверка ввода Х
  cout << "x in range (-10000000; -1) * (1; 10000000)\n";
  cout << "enter x" << endl;
  while (1) {
    stringstream ss;
    string buferNum;

    cin >> buferNum;
    ss << buferNum;

    if (ss >> x) {
      try {
        if (!(dx1 <= x and x <= dx2) or (x >= -1 and x <= 1)) {
          throw 1;
        }
        cout << "x = " << x << "\n";
        break;
      } catch (int err) {
        cout << "error! number is not in range\n";
      }
    } else {
      cout << "Error with type\n";
    }
  }
  powx = x;

  cout << "Enter the number of the desired way to solve the example:\n1.\twith "
          "eps\n2.\twith for\n3.\twith math func\n\n";
  int numberOperation;
  cin >> numberOperation;

  if (numberOperation == 1) // eps
  {

    //вычисление с помощью eps. 1.1 пункт.

    /*........................................ВВОД ПЕРЕМЕННОЙ
     * EPS......................................*/
    cout << "eps in range (0;1)\n";
    cout << "enter eps" << endl;
    //циклическая проверка ввода eps
    while (1) {
      stringstream ss;
      string buferNum;

      cin >> buferNum;
      ss << buferNum;

      if (ss >> eps) {
        try {
          if (!(deps1 < eps and eps <= deps2)) {
            throw 1;
          }
          cout << "eps = " << eps << "\n";
          break;
        } catch (int err) {
          cout << "error! number is not in range\n";
        }
      } else {
        cout << "Error with type\n";
      }
    }
    /*........................................КОНЕЦ ВВОДА ПЕРЕМЕННОЙ
     * EPS......................................*/

    int exp;
    cout << "select display mode\n";
    cout << "1.\tscientific\n2.\tfixed\n";
    cin >> exp;
    cout << "calculating the amount using eps:" << endl;

    if (exp == 1) {
      cout.setf(ios_base::scientific);
    }
    if (exp == 2) {
      cout.setf(ios_base::fixed);
    }

    do {
      u = 1 / (powx * (2 * n + 1));

      sum += u;
      cout << "n = " << n << "\t"
           << "sum = " << sum * 2 << "\t"
           << "u = " << u << endl;

      powx = powx * x * x;
      n += 1;
    } while (abs(u) > eps);
  }

  else if (numberOperation == 2) // K
  {

    /*........................................ВВОД ПЕРЕМЕННОЙ
     * К......................................*/
    cout << "Enter k by character. If you want to stop typing, write the "
            "symbol f \n";
    int k = 0;
    while (1) {
      char c;
      cin >> c;
      if (c >= '0' && c <= '9') {
        k = k * 10 + (c - '0');
        cout << "current k:   " << k << endl;
      } else if (c == 'f')
        break;
    }
    /*........................................КОНЕЦ ВВОДА ПЕРЕМЕННОЙ
     * К................................*/

    //Вычисление суммы первых n членов ряда. 1.2 пункт.
    cout << "calculating the amount using for:" << endl;
    for (n = 0, sum = 0, powx = x, u = 1; n <= k; n++) {
      u = 1 / (powx * (2 * n + 1));
      sum += u;

      cout << "n = " << n << "\t"
           << "sum = " << sum * 2 << "\t"
           << "u = " << u << endl;

      powx = powx * x * x;
    }
  }

  else if (numberOperation == 3) {
    //использование математической формулы. 1.3 пункт.
    cout << "calculating the amount using math func:" << endl;
    cout << log((x + 1) / (x - 1));
    cout << endl;
  }

  cout << "again? Y/N\n";
  string again_wow;
  cin >> again_wow;
  if (again_wow == "Y") {
    system("cls");
    main();
  }
  return (0);
}