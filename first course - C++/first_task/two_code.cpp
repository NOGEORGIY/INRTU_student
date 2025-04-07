#include <iostream>

int main() {

  int month;
  std::string season;

  std::cout << "Введите номер месяца\n";
  std::cin >> month;

  switch (month) {
  case 1:
  case 2:
  case 3:
    season = "Зима";
    break;

  case 4:
  case 5:
  case 6:
    season = "Весна";
    break;

  case 7:
  case 8:
  case 9:
    season = "Лето";
    break;

  case 10:
  case 11:
  case 12:
    season = "Осень";
    break;

  default:
    std::cout << "число месяца выходит за диапазон возможных значений";
    return (0);
  }
  std::cout << season;
  return (0);
}