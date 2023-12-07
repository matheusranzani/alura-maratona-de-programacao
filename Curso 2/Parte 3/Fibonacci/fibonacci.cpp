#include <iostream>

using namespace std;

// int fibonacci(int N) {
//   if (N == 0 || N == 1) {
//     return 1;
//   }

//   return fibonacci(N - 1) + fibonacci(N - 2);
// }

// 1 1 2 3 5 8
// 0 1 2 3 4 5
int fibonacci(int N) {
  if (N == 0 || N == 1) return 1;

  int primeiro = 0;
  int segundo = 1;
  int fibo;

  for (int i = 1; i <= N; i++) {
    fibo = primeiro + segundo;
    primeiro = segundo;
    segundo = fibo;
  }

  return fibo;
}

int main() {
  int N;

  cin >> N;

  cout << fibonacci(N) << endl;

  return 0;
}
