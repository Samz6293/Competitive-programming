#include <iostream>
using namespace std;

int main() {
  // test cases
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int size, special;
    cin >> size >> special;
    int moves = 0;
    int arr[size];

    // Populate
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
      moves += arr[i];
    }

    // math
    if (moves % 2 != 0) {
      cout << "YES" << endl;
    }

    else if (moves % 2 == 0) {
      moves = 0;
      for (int i = 0; i < size; i++) {
        moves += special;
      }
      if (moves % 2 == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
}
