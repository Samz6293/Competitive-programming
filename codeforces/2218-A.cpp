#include <iostream>
using namespace std;

int main() {
  // test cases
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int x;
    cin >> x;
    if (x == 67 || x == -67) {
      cout << x << endl;
    } else {
      cout << x + 1 << endl;
    }
  }
}
