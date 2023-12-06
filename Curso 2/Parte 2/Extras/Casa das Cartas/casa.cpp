#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int M;

bool compara(int i, int j) {
  return ((i % M) > (j % M) || (i % M) == (j % M) &&  (i > j));
}

int main() {
  int N;
  vector<int> valores;

  cin >> N >> M;

  int temp = N;
  while (temp--) {
    int v;

    cin >> v;

    valores.push_back(v);
  }

  sort(valores.begin(), valores.end(), compara);

  for (int i = 0; i < N; i++) {
    cout << valores[i] << " ";
  }

  cout << endl;

  return 0;
}
