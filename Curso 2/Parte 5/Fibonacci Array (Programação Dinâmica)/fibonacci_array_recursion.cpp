#include <iostream>

using namespace std;

int counter[70];
bool was_calculated[70];
long F[70];

// long fibonacci(int N) {
//   counter[N]++;

//   if (N == 0) return 0;
//   if (N == 1) return 1;

//   return fibonacci(N - 1) + fibonacci(N - 2);
// }

long fibonacci(int N) {
  if (was_calculated[N]) {
    return F[N];
  }

  counter[N]++;
  was_calculated[N] = true;

  if (N == 0) {
    F[N] = 0;
  } else if (N == 1) {
    F[N] = 1;
  } else {
    F[N] = fibonacci(N - 1) + fibonacci(N - 2);
  }

  return F[N];
}

int main() {
  int T;

  cin >> T;

  while (T--) {
    int N;

    cin >> N;

    cout << "Fib(" << N << ") = " << fibonacci(N) << endl;

    for (int i = 0; i <= N; i++) {
      cout << "Fib(" << N << ") foi calculado " << counter[i] << " vez(es)" << endl;
    }
  }

  return 0;
}
