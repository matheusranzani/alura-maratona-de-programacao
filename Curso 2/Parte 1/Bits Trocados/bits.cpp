#include <iostream>

using namespace std;

int main() {
  int V, n = 1;

  do {
    // I = 50 | J = 10 | K = 5 | L = 1
    int I, J, K, L, resto;
    I = J = K = L = 0;

    cin >> V;
    resto = V;

    while (resto != 0) {
      if (resto >= 50) {
        resto = resto - 50;
        I++;
      } else if (resto >= 10) {
        resto = resto - 10;
        J++;
      } else if (resto >= 5) {
        resto = resto - 5;
        K++;
      } else {
        L += resto;
        resto = 0;
      }
    }

    if (V != 0) {
      cout << "Teste " << n++ << endl;
      cout << I << " " << J << " " << K << " " << L << endl << endl;
    }
  } while (V != 0);

  return 0;
}
