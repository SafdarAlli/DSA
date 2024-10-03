#include <iostream>
using namespace std;

int main() {
  int n = 4;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    if (i != 0) {
      for (int j = 0; j < n - i; j++) {
        cout << " ";
      }
      for (int j = 0; j < n - i; j++) {
        cout << " ";
      }
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  // botton loop
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "*";
    }
    if (i != n) {

      for (int j = 0; j < i; j++) {
        cout << " ";
      }
      for (int j = 0; j < i; j++) {
        cout << " ";
      }
    }
    for (int j = 0; j < n - i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
