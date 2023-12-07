#include <iostream>

using namespace std;

int fatorial(int N) {
  if (N == 0 || N == 1) {
    return 1;
  }

  return N * fatorial(N - 1);
}

// int fatorial(int N) {
//   int fat = 1;

//   for (int i = 1; i <= N; i++) {
//     fat *= i;
//   }

//   return fat;
// }

int main() {
  int N;

  cin >> N;

  cout << fatorial(N) << endl;

  return 0;
}
