#include <iostream>

using namespace std;

int main() {
  int X;

  while (cin >> X) {
    if (X == 42) break;

    cout << X << endl;
  }

  return 0;
}
