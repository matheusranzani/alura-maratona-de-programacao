#include <iostream>

using namespace std;

int main() {
  int N, soma = 0;

  cin >> N;

  while (N--) {
    int X;

    cin >> X;

    soma += X;
  }

  cout << soma << endl;

  return 0;
}
