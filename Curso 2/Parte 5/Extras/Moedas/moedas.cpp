#include <iostream>
#include <cstring>

using namespace std;

const int NAO_CALCULADO = -1;
const int INF = 100000;

int n, moedas[109];
int memoization[50009];

int calcula(int m) {
  if (memoization[m] == NAO_CALCULADO) {
    memoization[m] = INF;

    for (int i = 0; i < n; i++) {
      if (moedas[i] <= m) {
        memoization[m] = min(memoization[m], calcula(m - moedas[i]) + 1);
      }
    }
  }

  return memoization[m];
}

int main() {
  int m;

  while (cin >> m) {
    if (m == 0) {
      break;
    }

    cin >> n;

    memset(memoization, NAO_CALCULADO, sizeof(memoization));
    memoization[0] = 0;

    for (int i = 0; i < n; i++) {
      cin >> moedas[i];
    }

    int resultado = calcula(m);

    if (resultado == INF) {
      cout << "Impossivel" << endl;
    } else {
      cout << resultado << endl;
    }
  }

  return 0;
}
