#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& vetor) {
  for (int i = 0; i < vetor.size(); i++) {
    int posicao_menor = i;

    for (int j = i; j < vetor.size(); j++) {
      if (vetor[j] < vetor[posicao_menor]) {
        posicao_menor = j;
      }
    }

    swap(vetor[i], vetor[posicao_menor]);
  }
}

int main() {
  int N;
  int numero;

  cin >> N;

  vector<int> numeros;

  while (N--) {
    cin >> numero;
    numeros.push_back(numero);
  }

  selection_sort(numeros);

  for (int i = 0; i < numeros.size(); i++) {
    cout << numeros[i] << " ";
  }

  cout << endl;

  return 0;
}
