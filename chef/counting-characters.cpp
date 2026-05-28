#include <iostream>
using namespace std;

int main() {
  // test cases
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    int a = 0;
    int b = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      if (s[j] == 'a') {
        a++;
      } else {
        b++;
      }
    }
    cout << a << " " << b << endl;
  }
}
