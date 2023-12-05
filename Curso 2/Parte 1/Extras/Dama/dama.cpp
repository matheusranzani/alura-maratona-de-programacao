#include <iostream>

using namespace std;

int main() {
  int X1, Y1, X2, Y2;

  while (cin >> X1 >> Y1 >> X2 >> Y2) {
    int movimentos = 0;

    if (X1 == 0) break;

    if (!(X1 == X2 && Y1 == Y2)) {
      if ((X1 == X2 || Y1 == Y2) || (X1 + Y1) == (X2 + Y2) || (X1 - Y1) == X2 - Y2) {
        movimentos = 1;
      } else {
        movimentos = 2;
      }
    }

    cout << movimentos << endl;
  }

  return 0;
}
