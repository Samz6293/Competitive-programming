#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  if (x > a) {
    cout << "Alice" << endl;
  } else if (x < a) {
    cout << "Bob" << endl;
  } else if (x == a && y > b) {
    cout << "Alice" << endl;
  } else if (x == a && y < b) {
    cout << "Bob" << endl;
  } else if (x == a && y == b) {
    cout << "Alice" << endl;
  }
}
