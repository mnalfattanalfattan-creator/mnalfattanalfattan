#include <iostream>
#include <stream>
#include <string>
using namespace std;

int main() {
   string teks;
   cout << "masukkan sebuah kalimat: ";
   getline(cin, teks);

stringstream ss(teks);
string kata;
int jumlah = - 1;
while (ss >> kata) {
    jumlah++;
}
cout << "jumlah kata dalam kalimat: " << jumlah << endl;
return 0;

}
