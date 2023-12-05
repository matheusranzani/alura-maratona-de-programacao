#include <iostream>

using namespace std;

int main() {
  int N, P, Q;
  char C;
  int resultado;

  cin >> N;
  cin >> P >> C >> Q;

  if (C == '+') {
    resultado = P + Q;
  } else {
    resultado = P * Q;
  }

  resultado <= N ? cout << "OK" << endl : cout << "OVERFLOW" << endl;

  return 0;
}
