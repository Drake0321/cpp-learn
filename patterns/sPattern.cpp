#include <conio.h>
#include <iostream>

using namespace std;

int main() {
  int n = 7;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (i == 0 || i == n - 1 || i == n / 2) {
        cout << "*";
      } else {
        if (i + j < n / 2) {
          cout << "*";
          break;
        } else if (i + j > n / 2) {
          if (j == n - 2) {
            cout << "*";
          } else {
            cout << " ";
          }
        }
      }
    }
    cout << endl;
  }
  getch();
  return 0;
}
