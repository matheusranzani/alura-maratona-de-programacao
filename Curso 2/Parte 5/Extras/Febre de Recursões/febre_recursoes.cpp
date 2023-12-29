#include <iostream>

using namespace std;

const long long NAO_CALCULADO = -1000009;

long long f[1009];
long long a[1009];

long long calcula_f(int n, int k, int m) {
  if (f[k] == NAO_CALCULADO) {
    long long somatorio = 0;

    for (int i = 1; i <= n; i++) {
      somatorio = (somatorio + a[i] * calcula_f(n, k - i, m)) % m;
    }

    f[k] = somatorio;
  }

  return f[k];
}

int main() {
  int n, k, m;

  cin >> n >> k >> m;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= k; i++) {
    f[i] = NAO_CALCULADO;
  }

  for (int i = 1; i <= n; i++) {
    cin >> f[i];
  }

  cout << calcula_f(n, k, m) << endl;

  return 0;
}
