#include <iostream>
using namespace std;
int main () {
  double suhu;
  int pilihan;
cout <<  "===program konversi suhu ===" << endl; 
cout <<  "pilih satuan asal:" << endl;
cout <<  "l. celsius" << endl;
cout <<  "2. fahrenreit" <<endl;
cout <<  "3. kelvin" << endl;
cout <<   "masukkan pilihan ( 1-3): ";
cin  >>   pilihan ;
cout  << "masukkan nilai suhu; ";
cin  >> suhu; cout << fixed;
cout. precision(2);
switch (pilihan) {
case l: // celsius
     cout << "\nDari celsius:" <<endl;
     cout << "fahrenheit: " << (suhu * 9/5) + 32 << endl
     cout << "Kelvin: " << suhu + 273.15 << endl;
break;
case 2: // fahrenheit
     cout << "\nDari fahrenheit:" << endl;
     cout << "celsius " << (suhu -32) * 5/9 <<endl;
     cout << "Kelvin: " << (suhu -32) * 5/9 +273.15 << endl;
case 3:  //kelvin
     cout << "\nDari Kelvin:" << endl;
     cout << "celsius: " <<suhu -273.15 << endl;
     cout << "fahrenheit: " << (suhu -273.15) * 9/5 + 32 << endl;
break;
default:
    cout <<" pilihan tidak valid!" << endl;
}
return 0;
}
