#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  char L;

  while (cin >> N) {
    vector<int> tamanho;
    vector<char> lado;
    vector<bool> selecionada;

    int n = N;

    while (n--) {

      cin >> M >> L;

      tamanho.push_back(M);
      lado.push_back(L);
      selecionada.push_back(false);
    }

    int pares = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 1; j < N; j++) {
        if (!selecionada[i] && !selecionada[j] &&
            tamanho[i] == tamanho[j] &&
            lado[i] != lado[j]) {
          selecionada[i] = selecionada[j] = true;
          pares++;

          break;
        }
      }
    }

    cout << pares << endl;
  }

  return 0;
}
