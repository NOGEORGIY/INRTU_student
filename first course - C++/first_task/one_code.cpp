#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  int A, B, C, D;
  int Afin, Bfin, Cfin, Dfin;

  cout << "Введите действительные числа A, B, C, D\n";
  cin >> A >> B >> C >> D;

  if (A <= B && B <= C && C < D) {
    Afin = D;
    Bfin = D;
    Cfin = D;
    Dfin = D;
  } else if (A > B && B > C && C > D) {
    Afin = A;
    Bfin = B;
    Cfin = C;
    Dfin = D;
  } else {
    Afin = A * A;
    Bfin = B * B;
    Cfin = C * C;
    Dfin = D * D;
  }
  cout << "\n" << Afin << " " << Bfin << " " << Cfin << " " << Dfin;
  return (0);
}