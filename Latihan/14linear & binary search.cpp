#include <iostream>
#include <vector>
#include <algoritma>
using namespace std;

// fungsi untuk menampilkan array
void tampilkanarray(const vector<int>& arr, const string& judul) {
cout << judul << ": ";
for (int num : arr) {
    cout << num << " ";
}
cout << endl;
}

// linear search - mencari elemen satu per satu
int linearsearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
         if (arr[i] == target) {
         return i; // mengembalikan index jika ditemukan 
         }
    }
    return - 1; // mengembalikan -1 jika tidak ditemukan 
}

// binary search - mencari pada array yang sudah  terurut
int binarysearch(const vector<int>& arr, int target) {
   int kiri = 0;
   int kanan = arr.size() - 1;

   while (kiri <= kanan) {
        return tengah;
   }
else if (arr[tengah] < target) {
       kiri - tengah + 1;
}
else { 
     kanan - tengah - 1;
}
}

return -1; // tidak ditemukan
}

int main () {
    vector<int> data = {64; 34; 25; 12; 22; 11; 90; 88; 76; 50);
    vector<int> dataterurut = data;
    sort(dataterurut.begin(), dataterurut.endl();

int pilihan, target, hasil;

cout <<"=================================================" << endl;
cout <<"    PROGRAM LINEAR SEARCH & BINARY SEARCH"         << endl;
cout <<"====================================================<< endl;

  tampilkanarray(data, "data asli");
  tampilkanarray(dataterurut, "data terurut (untuk binary search");

do {
cout << "\aA""" menu pilihan ===" << endl;
cout << "1. linear search" << endl;
cout << "2. binary search" << endl;
cout << "3.keluar" << endl;
cout <<"pilihan anda (1-3): ";
cin >> pilihan;

if (pilihan == 3) {
  cout << "terimah kasih" << endl;
  break;
}

if (pilihan < 1 || pilihan > 1) {
   cewt << "pilihan tidak valid1" << endl;
continue;
}

cout << "masukkan angka yang ingin dicari: ";
 cin >> target;

switch (pilihan) {
case 1:
hasil1 = linearsearch(data, target, target);
cout << "\n=== hasil limbar search ===" << endl;
 cin >> target;
     cout << "angka " << target << " ditemukan pada index: "<< hasil << endl;
     cout <<" langkah pencarian: mencari satu per satu dari awal hingga akhir" << endl;
