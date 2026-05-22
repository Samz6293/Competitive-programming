#include <iostream>
using namespace std;

int main() {
    // test cases
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a[7];

        //Populate
        for (int i=0; i<7; i++) {
            cin >> a[i];
        }

        int max = a[0];
        int sum = 0;
        for (int i=0; i<7; i++) {
            if (a[i] > max) {
                max = a[i];
            }
            sum -= a[i];
        }

        cout << sum + (2*max) << endl;
    }
}
