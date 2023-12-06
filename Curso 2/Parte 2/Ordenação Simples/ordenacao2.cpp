#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  int numero;

  cin >> N;

  vector<int> numeros;

  while (N--) {
    cin >> numero;
    numeros.push_back(numero);
  }

  sort(numeros.begin(), numeros.end());

  for (int i = 0; i < numeros.size(); i++) {
    cout << numeros[i] << " ";
  }

  cout << endl;

  return 0;
}
