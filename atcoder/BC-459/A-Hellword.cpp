#include <iostream>
#include <string>
using namespace std;

int main() {

  int X;
  cin >> X;

  string hello = "HelloWorld";
  string out = "";
  for (int i = 0; i < 10; i++) {
    if (i + 1 == X) {
      continue;
    }

    else {
      out += hello[i];
    }
  }
  cout << out << endl;
}
