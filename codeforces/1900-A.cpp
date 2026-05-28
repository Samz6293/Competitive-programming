#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  // test cases
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int max_streak = 0, c_streak = 0;
    for (int j = 0; j < n; j++) {
      if (s[j] == '.') {
        c_streak++;
        count++;
        max_streak = max(c_streak, max_streak);
      }

      else {
        c_streak = 0;
      }
    }
    if (max_streak >= 3) {
      cout << 2 << endl;
    } else {
      cout << count << endl;
    }
  }
}
