#include <iostream>

using namespace std;

int main() {
  int numero;

  while (numero != 42) {
    cin >> numero;

    if (numero != 42) {
      cout << numero << endl;
    }
  }

  return 0;
}
