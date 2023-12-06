#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void selection_sort(vector<float>& notas) {
  for (int i = 0; i < notas.size(); i++) {
    int posicao_menor = i;
    for (int j = i + 1; j < notas.size(); j++) {
      if (notas[j] < notas[posicao_menor]) {
        posicao_menor = j;
      }
    }

    swap(notas[i], notas[posicao_menor]);
  }
}

int main() {
  float nota;
  vector<float> notas;

  while (cin >> nota) {
    notas.push_back(nota);
  }

  selection_sort(notas);

  notas.erase(notas.begin());
  notas.pop_back();

  float soma = 0;
  for (int i = 0; i < notas.size(); i++) {
    soma += notas[i];
  }

  // Outro jeito de definir a precisão para uma casa decimal
  // cout.precision(1);
  // cout << fixed;
  // cout << soma << endl;

  cout << fixed << setprecision(1) << soma << endl;

  return 0;
}
