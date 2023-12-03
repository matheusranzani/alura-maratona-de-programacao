#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int i, i_aux, j, cont;

  while (cin >> i >> j) {
    int cont_max = 0;

    for (i_aux = min(i, j); i_aux <= max(i, j); i_aux++) {
      int n = i_aux;
      cont = 0;

      while (i_aux != max(i, j) + 1) {
        cont++;

        if (n == 1) {
          if (cont > cont_max) {
            cont_max = cont;
          }
          break;
        } else if (n % 2 != 0) {
          n = (3 * n) + 1;
        } else {
          n = n / 2;
        }
      }
    }

    cout << i << " " << j << " " << cont_max << endl;
  }

  return 0;
}
