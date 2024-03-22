//На 3 делятся только те числа, у которых сумма цифр делится на 3.
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int del_on_three(string line, int num_of_numbers_i_dont_know, int sum,
                 string err, string err2) {
  const char that_num = line[num_of_numbers_i_dont_know];

  bool check_num = false;
  for (int i = 0; i < 10; i++) {
    if (int(that_num - '0') == i) {
      check_num = true;
      break;
    }
  }

  if (check_num == false && that_num != ' ') {
    cout << err << "\n";
    return (-1);
  }

  if (that_num == ' ' && num_of_numbers_i_dont_know != line.size() - 1) {
    cout << err << "\n";
    return (-1);
  }

  if (num_of_numbers_i_dont_know == line.size() - 1 && that_num != ' ') {
    cout << err2 << "\n";
    return (-1);
  }
  if (num_of_numbers_i_dont_know == line.size() - 1 && that_num == ' ') {
    return sum;
  }

  if (that_num != ' ') {
    return del_on_three(line, num_of_numbers_i_dont_know + 1,
                        sum + int(that_num - '0'), "Вы ввели не число.\n",
                        "В конце литеральной последовательности не пробел\n");
  }
  return 0;
}

int main() {
  setlocale(LC_ALL, "ru");
  string line;
  cout << "Введите пследовательность литералов, оканчивающихся пробелом\n";

  getline(cin, line);

  int sum = del_on_three(line, 0, 0, "Вы ввели  не число.\n",
                         "В конце литеральной последовательности не пробел\n");
  cout << ((sum == -1)
               ? "Введенная последовательность не соответсувет условиям\n"
               : ((sum % 3 == 0)
                      ? "Заданная последовательность литер делится на 3 и "
                        "заканчивается на пробел\n"
                      : "заданная последовательность литер не делится на 3, но "
                        "заканчивается на пробел\n"));
}  