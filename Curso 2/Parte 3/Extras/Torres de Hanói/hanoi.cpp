#include <iostream>

using namespace std;

int hanoi(int N) {
  if (N == 1) {
    return 1;
  }

  return 2 * hanoi(N - 1) + 1;
}

int main() {
  int N, t = 1;

  do {
    cin >> N;
    if (N == 0) break;

    cout << "Teste " << t++ << endl;
    cout << hanoi(N) << endl << endl;
  } while (N != 0);

  return 0;
}
