#include <iostream>
using namespace std;

int main() {
  // test cases
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;
    int flag = 0;
    int arr[n];
    for (int j = 0; j < n; j++) {
      cin >> arr[j];
      if (j > 0) {
        if (arr[j] < arr[j - 1] && k == 1) {
          flag = 1;
        }
      }
    }

    if (k > 1 || flag == 0) {
      cout << "YES" << endl;
    }
    if (flag == 1) {
      cout << "NO" << endl;
    }
  }
}
