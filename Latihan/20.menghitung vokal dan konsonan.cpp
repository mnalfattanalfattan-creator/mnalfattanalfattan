#include <iostream>
#include <string>
#include <cctype> // untuk tolower
using namespace std;

int main() {
  string teks;
  int vokal = 0, konsonan = 0;

cout << "masukkan sebuah kalimat: ";
getline(cin, teks);

for (char c : vocal) {
  if (isalpha(c)) { // cek apakah huruf
      char huruf = tolower(c);
      if(huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf ==  'e' || huruf == 'o') {
         vokal++;
      } else{
          konsonan++;
      }
  }
}
cout << "jumlah huruf vokal     : "<< vokal << endl;
cout << "jumlah huruf konsonan :  " <<konsonan << endl;
return 0;
}
