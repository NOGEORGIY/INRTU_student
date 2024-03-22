#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  string text;
  cout << "Введите последовательность слов из строчных букв; между соседними "
          "словами - запятая, за последним словом - точка.\n";

  cin >> text;

  set<char> vowelInText;

  for (auto C : text) {
    if (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' || C == 'y') {
      vowelInText.insert(C);
    }
  }
  cout << "гласные по порядку: ";
  for (auto s : vowelInText) {
    cout << s << " ";
  }
  return (0);
}
