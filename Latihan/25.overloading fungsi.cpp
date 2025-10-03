#include <iostream>
using namespace std;

int luas(int sisi) {
    return sisi * sisi;
}
int luas (int panjang, int lebar) {
  return panjang * lebar;
}

double luas(double jari) {
  return 3.14 * jari * jari;
}


int main() {
  int sisi, panjang, lebar;
  double jari;

cout << "masukkan sisi persegi : ";
cin >> sisi;
cout << "luas persegi = " << luas(sisi)  << endl;

cout << "\nMasukkan panjang persegi panjang : ";
cin >> panjang:
cout << "Masukkan lebar persegi panjang : ";
cin >> lebar;
cout << "luas persegi panjang = " << luas(panjang, lebar) << endl;

cout << "\nMasukkan jari - jari lingkaran : ";
cin >> jari;
cout << "luas lingkaran = " << luas(jari) << endl;

return 0;
}
  
