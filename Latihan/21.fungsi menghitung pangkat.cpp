#include <iostream>
using namespace std;

int hitungpangkat(int basis, int eksponen) {
  int hasil = 1;
  for (int i = 0; i < eksponen; i++) {
  hasil *= basis;
  }
return hasil;
}

int main() {
int a, b;
cout << "masukkan bilangan basis: ";
cin >> a;
cout << "masukkan bilangan pangkat: ";
cin >> b;
cout << a << " ^  " << b << " = " << hitungpangkat(a, b) << endl;

return 0;

}
