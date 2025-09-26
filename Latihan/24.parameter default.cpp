#include <iostream>
using namespace std;

int hitungtotal(int harga, int diskon  = 0.10) {
  return harga - (harga * diskon);
}

int main() {
  int hargabarang;

cout << "masukkan harga barang; ";
cin  >> hargabarang;

cout << "total harga dengan diskon default (10%): rp"
     << hitungtotal(hargabarang) << endl;

int disKonuser;
cout  << "masukkan diskon (dalam persen, contoh: 0.2 untuk 20%): ";
cin >> diskonuser;
cout << "total dengan diskon " << (diskonuser * 100 ) << "%: RP"
     << hitungtotal(hargabarang, disKONUser) << endl;
return 0;
}
