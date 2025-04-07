/*
Вариант 10.
•	m1=-5, m2=11
•	вычислить произведение всех элементов
•	подсчитать количество чётных элементов
•	удалить все нечётные элементы
*/

#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

//Вывод элементов
void output_of_elements(vector<int> numbers) {
  for (int n : numbers) {
    cout << n << " ";
  }
  cout << "\n\n";
}

//инициализация массива
void initialCont(vector<int> &mas) {
  int n1, n2;
  cout << "Введите начальное значение x: ";
  cin >> n1;
  cout << "Введите конечное значение x: ";
  cin >> n2;

  for (int i = n1; i < n2 + 1; i++) {
    mas.push_back(i);
  }
}

int main() {
  vector<int> mas;
  initialCont(mas);        //инициализация массива
  output_of_elements(mas); //Выводит элементы
  int product = accumulate(mas.begin(), mas.end(), 1, multiplies<int>()); // Перемножает все элементы

  cout << "Произведение всех элементов:  " << product << "\n";
  int count =
      std::count_if(mas.begin(), mas.end(), [](int n) { return n % 2 == 0; });

  cout << "Количество чётных элементов:  " << count << "\n";
  mas.erase(remove_if(mas.begin(), mas.end(), [](int n) { return n % 2 != 0; }),
            mas.end());

  cout << "Вектор после удаления нечётных элементов: ";
  output_of_elements(mas);
}