#include <iostream>

using namespace std;

int numero_lanches(int *tamanhos, int tamanho, int K) {
  int quantidade = 0;

  for (int i = 0; i < K; i++) {
    quantidade += tamanhos[i] / tamanho;
  }

  return quantidade;
}

int busca_tamanho(int *tamanhos, int esq, int dir, int N, int K) {
  if (esq == dir) {
    return esq;
  }

  int meio = (esq + dir + 1) / 2;

  if (numero_lanches(tamanhos, meio, K) >= N) {
    return busca_tamanho(tamanhos, meio, dir, N, K);
  } else {
    return busca_tamanho(tamanhos, esq, meio - 1, N, K);
  }
}

int main() {
  int N, K;

  cin >> N >> K;

  int tamanhos[K];

  for (int i = 0; i < K; i++) {
    cin >> tamanhos[i];
  }

  cout << busca_tamanho(tamanhos, 1, 10000, N, K) << endl;

  return 0;
}
