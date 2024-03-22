
#include <iostream>
#include <sstream>
using namespace std;

long long int intInputFromConsole(string mess, string err, long long int min,
                                  long long int max) {
  long long int curNumber = 0;
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
    cout << err << endl;
  }
}

int main() {
  setlocale(LC_ALL, "Russian");

  int M[12];
  int A[12];
  int rand_or_hands;
  int counterN = 1;

  cout << "Как вводить значения?\n 0 – ручной ввод\n 1 – случайные числа\n";
  rand_or_hands =
      intInputFromConsole("\n", "Ввод невереный, попробуйте снова\n", 0, 1);
  cout << "Ок!\n\n";

  cout << "Сколько будет элементов вектора?(Максимум - 12)\n";
  counterN =
      intInputFromConsole("\n", "Ввод невереный, попробуйте снова\n", 1, 12);
  cout << "Ок!\n\n";

  if (rand_or_hands == 1) {
    for (int i = 0; i < counterN; i++) {
      M[i] = rand() % 9999 + 1;
    }
  } else if (rand_or_hands == 0) {
    cout << "Вводите значения элементов массива\n";
    for (int i = 0; i < counterN; i++) {
      M[i] = intInputFromConsole("\n", "Некорректный ввод. Введите ещё раз.\n",
                                 1, 999999999);
      cout << "ок!\n";
    }
  }

  for (int i = 0; i < counterN; i++) {
    int numb = M[i];
    int count = 0;
    while (numb) {
      numb /= 10;
      count++;
    }

    A[i] = count;
  }

  cout << "\nМножество M:\n";
  for (int i = 0; i < counterN; i++) {
    cout << M[i] << ' ';
  }
  cout << "\n";

  cout << "Множество А:\n";
  for (int i = 0; i < counterN; i++) {
    cout << A[i] << ' ';
  }
  cout << "\n";
  return 0;
}