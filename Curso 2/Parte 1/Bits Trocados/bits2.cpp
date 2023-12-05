#include <iostream>

using namespace std;

int main() {
  int V;
  int notas[] = {50, 10, 5, 1};

  for (int n = 1; ; n++) {
    cin >> V;

    if (V == 0) break;

    cout << "Teste " << n << endl;

    int resto = V;

    for (int i = 0; i < 4; i++) {
      int quantidade_notas = resto / notas[i];
      resto %= notas[i];

      cout << quantidade_notas << " ";
    }

    cout << endl << endl;
  }

  return 0;
}
