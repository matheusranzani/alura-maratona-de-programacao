#include <iostream>

using namespace std;

const int MAXN = 10009;
const int infinito = 2000000000;

int A[MAXN], F[MAXN], O[MAXN];

int busca_valor(int esq, int dir, int valor) {
  if (esq == dir) {
    return esq;
  }

  int meio = (esq + dir) / 2;

  if (A[meio] <= valor) {
    return busca_valor(meio + 1, dir, valor);
  } else {
    return busca_valor(esq, meio, valor);
  }
}

int main() {
  int N, M;

  cin >> N >> M;

  for (int i = 0; i < N - 1; i++) {
    cin >> A[i];
  }

  A[N - 1] = infinito;

  for (int j = 0; j < N; j++) {
    cin >> F[j];
  }

  for (int k = 0; k < M; k++) {
    cin >> O[k];

    int posicao = busca_valor(0, N - 1, O[k]);
    cout << F[posicao] << " ";
  }

  cout << endl;

  return 0;
}
