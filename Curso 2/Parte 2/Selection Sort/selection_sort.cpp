#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& vetor) {
  for (int i = 0; i < vetor.size(); i++) {
    int posicao_menor = i;

    for (int j = i + 1; j < vetor.size(); j++)  {
      if (vetor[j] < vetor[posicao_menor]) {
        posicao_menor = j;
      }
    }

    swap(vetor[posicao_menor], vetor[i]);
  }
}

int main() {
  vector<int> vetor = {9, 3, 10, 6};

  for (const int& i : vetor) {
    cout << i << " ";
  }

  cout << endl;

  selection_sort(vetor);

  for (const int& i : vetor) {
    cout << i << " ";
  }

  cout << endl;

  return 0;
}
