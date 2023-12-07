#include <iostream>

using namespace std;

int f91(int N) {
  if (N <= 100) {
    return f91(f91(N + 11));
  }

  return N - 10;
}

int main() {
  int N;

  do {
    cin >> N;
    if (N == 0) break;
    cout << "f91(" << N << ") = " << f91(N) << endl;
  } while (N != 0);

  return 0;
}
