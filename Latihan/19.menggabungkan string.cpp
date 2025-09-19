#include <iostream>
#include <string>
using namespace std;

int main() {
  string teks1, teks2, hasil;

cout << "masukkan string pertama: ";getline(cin, teks1);
cout << "masukkan string kedua: "; getline(cin, teks1);
hasil = teks1 + " " + teks2;
cout << "hasil penggabungan: " << hasil << endl;

return 0;
}
