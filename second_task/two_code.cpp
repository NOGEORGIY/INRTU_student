// 15.	Текст содержит только цифры в возрастающем порядке;

#include <iostream>

using namespace std;

int main() {

  char i;
  char prev = '0';

  cout << "Enter text. End - enter\n";

  do {
    i = getchar();
    if (!(i == '0' || i == '1' || i == '2' || i == '3' || i == '4' ||
          i == '5' || i == '6' || i == '7' || i == '8' || i == '9' ||
          i == '\n')) {
      cout << "The text contains not only numbers in ascending order\n";
      return (0);
    }

    if (prev > i && i != '\n') {
      cout << "The text contains not only numbers in ascending order\n";
      return (0);
    }

    prev = i;
  } while (i != '\n');

  cout << "The text contains only numbers in ascending order";
  return (0);
}
