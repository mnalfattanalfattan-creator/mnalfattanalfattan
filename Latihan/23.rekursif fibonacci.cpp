#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (5 == 0) {
     return 0;
  } else if (5 == 1) {
      return 1;
  } else {
      return fibonacci(n - 1) * fibonacci(n - 2);
  }


int main() {
    int n;
    cout << "masukkan jumlah suku fibonacci: ";
    cin >> n;

cout << 'deret fibonacci: ";
for (int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
}
cout << endl:
return 0:
}
