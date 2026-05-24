#include <iostream>
using namespace std;

int main() {
  // test cases
  int N, Q;
  cin >> N >> Q;
  int arr[N] = {0};
  for (int i = 0; i < Q; i++) {
    // test
    for (int i = 0; i < N; i++) {
      cout << arr[i];
    }
    cout << "Array end" << endl;
    int num, op;
    cin >> num >> op;
    if (num == 1) {
      arr[op - 1] += 1;
      int flag = 0;
      for (int i = 0; i < N; i++) {
        if (arr[i] == 0) {
          flag = 1;
          break;
        }
      }
      if (flag == 0) {

        for (int i = 0; i < N; i++) {
          arr[i] -= 1;
        }
      }
    } else if (num == 2) {
      int out = 0;
      for (int i = 0; i < N; i++) {
        if (arr[i] == op) {
          out++;
        }
      }
      if (out != 0) {
        cout << out << endl;
      }
    }
  }
}
