#include <iostream>
using namespace std;

void ubahvalue(int aa) {
  a = a + 10;
  cout << "nilai di dalam fungsi (pass by value) : " << a << endl;
}
void ubahreference(int &ba) {
  b = b + 10;
  cout << "nilai di dalam fungsi (pass by reference) : " << b << endl;
}

int main() {
    int x = 5;
    int y = 5;
    cout << "sebelumnya fungsi dipanggil:" << endl;
    cout << "x = " << x << " (untuk pass by value)" << endl;
    cout << "y = " << y << " (untuk pass by value)" << endl;

cout << "\nMemanggil fungsi pass by value..." << endl;
ubahvalue(x);
cout << "nilai x setelah fungsi (pass by value) : " << x << endl;

cout << "\Memanggil fungsi (pass by reference..."<< endl;
ubahreference(y);
cout << "nilai y setelah fungsi (pass by reference) : " << y << endl;

return 0;
}
