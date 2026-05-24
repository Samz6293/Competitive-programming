#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  string words[N];
  string number = "";
  for (int i = 0; i < N; i++) {
    cin >> words[i];
  }

  for (int i = 0; i < N; i++) {
    if (words[i][0] == 'a' || words[i][0] == 'b' || words[i][0] == 'c') {
      number += '2';
    } else if (words[i][0] == 'd' || words[i][0] == 'e' || words[i][0] == 'f') {
      number += '3';
    }

    else if (words[i][0] == 'g' || words[i][0] == 'h' || words[i][0] == 'i') {
      number += '4';
    }

    else if (words[i][0] == 'j' || words[i][0] == 'k' || words[i][0] == 'l') {
      number += '5';
    }

    else if (words[i][0] == 'm' || words[i][0] == 'n' || words[i][0] == 'o') {
      number += '6';
    }

    else if (words[i][0] == 'p' || words[i][0] == 'q' || words[i][0] == 'r' ||
             words[i][0] == 's') {
      number += '7';
    }

    else if (words[i][0] == 'w' || words[i][0] == 'x' || words[i][0] == 'y' ||
             words[i][0] == 'z') {
      number += '9';
    }

    else if (words[i][0] == 't' || words[i][0] == 'u' || words[i][0] == 'v') {
      number += '8';
    }
  }
  cout << number << endl;
}
