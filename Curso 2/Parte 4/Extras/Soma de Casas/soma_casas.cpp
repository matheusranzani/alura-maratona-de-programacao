#include <iostream>

using namespace std;

int busca_binaria(int *casas, int esq, int dir, int valor) {
  if (esq == dir) {
    return esq;
  }

  int meio = (esq + dir) / 2;

  if (casas[meio] < valor) {
    return busca_binaria(casas, meio + 1, dir, valor);
  } else {
    return busca_binaria(casas, esq, meio, valor);
  }
}

int main() {
  int N, K;

  cin >> N;

  int casas[N];

  int n = N, i = 0;
  while (n--) {
    cin >> casas[i++];
  }

  cin >> K;

  for (int i = 0; i < N - 1; i++) {
    int j = busca_binaria(casas, i + 1, N - 1, K - casas[i]);

    if (casas[i] + casas[j] == K) {
      cout << casas[i] << " " << casas[j] << endl;
      break;
    }
  }

  return 0;
}
