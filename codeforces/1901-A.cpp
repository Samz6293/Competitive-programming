#include <iostream>
using namespace std;

int main() {
  // test cases
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    int n, x;
    cin >> n >> x;
    int arr[n];

    // populate
    for (int j = 0; j < n; j++) {
      cin >> arr[j];
    }

    int max_gap[n + 1] = {0};
    max_gap[0] = arr[0];
    max_gap[n] = (x - arr[n - 1]) * 2;
    int capacity = max_gap[n];
    if (max_gap[0] > capacity) {
      capacity = max_gap[0];
    }
    for (int k = 1; k < n; k++) {
      max_gap[k] = arr[k] - arr[k - 1];
      if (max_gap[k] > capacity) {
        capacity = max_gap[k];
      }
    }
    cout << capacity << endl;
  }
}
