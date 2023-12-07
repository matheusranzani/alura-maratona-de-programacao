#include <iostream>

using namespace std;

int calcula(int N, int *calculos) {
  if (N == 1) return 1;

  if (N % 2 == 0) {
    (*calculos)++;
    return calcula(N / 2, calculos);
  } else {
    (*calculos)++;
    return calcula(3 * N + 1, calculos);
  }
}

int main() {
  int N, calculos = 0;
  // int N, calculos = 1;

  cin >> N;

  calcula(N, &calculos);

  cout << calculos << endl;

  return 0;
}
