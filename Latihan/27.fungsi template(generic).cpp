#include <iostream>
using namespace std;

template <typname T>
void tukar(t &a, T &b) {
  t temp = a;
  a = b;
  b = temp;
}

template <typename T>
T maksimum(T X, T Y) {
  return   (x > y) ? x : y;
}

int main() {
  int a = 10, b = 20;
  cout << "sebelum tukar (int): a = " << a << ",b = " << b << endl:
  tukar(a, b);
  cout << "setelah tukar (int): a = " << a << ", b = " << endl;

double x = 5.5, y = 3.3;
cout << "\nNilai maksimum (double): " << maksimum(x, y) << endl;

string s1 = "teknik", s2 = "jaringan";
cout << "\nsebelum tukar (string): s1 = " << s1 << ", s2 = " << s2 << endl;
tukar(s1, s2):
