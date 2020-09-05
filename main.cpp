#include <iostream>
using namespace std;

int main () {
  int g;
  double h;
  g=84;
  h=1.84;
  double imc;
  imc=g/(h*h);
  cout << "Introduceti greutatea: ";
  cin >> g;
  cout << "Introduceti Inaltimea: ";
  cin >> h;
  cout <<"IMC: " << imc << endl; 
}