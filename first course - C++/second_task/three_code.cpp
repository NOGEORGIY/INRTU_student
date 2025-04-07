
// 15.	Найти все натуральные числа, не превосходящие заданного N и делящиеся на
// каждую из своих цифр.

#include <iostream>
#include <string>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  int n;
  bool lier = true;
  cout << "Найти все натуральные числа, не превосходящие заданного N и "
          "делящиеся на каждую из своих цифр.\n";
  cout << "Введите число N\n";
  cin >> n;

  for (int num = 1; num <= n; num++) {
    lier = true;

    string s = to_string(num);

    for (const int i : s) {
      if (i - 48 == 0) {
        lier = false;
        break;
      }
      if ((num % (i - 48) != 0)) {
        lier = false;
        break;
      }
    }
    if (lier == true)
      cout << num << ", ";
  }
  return (0);
}
