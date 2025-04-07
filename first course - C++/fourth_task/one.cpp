#include "CircleSR.h"
#include <iostream>
#include <sstream>

using namespace std;

int intInputFromConsole(string mess, string err, double min, double max) {
  double curNumber = 0;
  string line;
  cout << mess;

  while (getline(cin, line)) {
    stringstream ss(line);
    if (ss >> curNumber) {
      if (ss.eof()) {
        if (curNumber > min && curNumber <= max) {
          return curNumber;
        }
      }
    }
    cout << err << "\n";
  }
  return (0);
}

int main() {

  double Pi = pi;

  cout << "Введите радиус первого круга: ";
  double R1 = intInputFromConsole("", "Введите число: ", 0, 100000);

  cout << "Введите радиус второго круга: ";
  double R2 = intInputFromConsole("", "Введите число: ", 0, 100000);

  cout << "Введите радиус третьего круга: ";
  double R3 = intInputFromConsole("", "Введите число: ", 0, 100000);

  cout << "Площадь первого круга: " << CircleSR(Pi, R1) << "\n";
  cout << "Площадь второго круга: " << CircleSR(Pi, R2) << "\n";
  cout << "Площадь третьего круга: " << CircleSR(Pi, R3) << "\n";

  return 0;
}