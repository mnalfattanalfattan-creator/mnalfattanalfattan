#include <iostream>
#include <string>
#include <algoritthm>
using namespace std;

int main() {
  string teks; asli;
  cout << "memasukkan sebuah kata/kalimat: ";
  getline(cin, teks);
  asli = teks;

teks. erase(remove(teks.begin(), teks.end()), teks.endl());
transform(teks.begin(), teks.end(), teks.begin(), ::tolower);
string terbalik = teks;
revorse(terbaik.begin(), terbalik.endl());

if (teks == terbalik) {
    cout << "\"" << asli << "\" adalah palindrom. " << endl;
}else{
  cout << "\"" << asli << "\" bukan palindrome."    << endl;
}
return 0;

}
