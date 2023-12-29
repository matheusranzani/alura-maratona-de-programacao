#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;

  cin >> T;

  while (T--) {
    int N;

    cin >> N;

    vector<long> fibonacci_array;

    fibonacci_array.push_back(0);
    fibonacci_array.push_back(1);

    long new_element;
    for (int i = 2; i <= N; i++) {
      new_element = fibonacci_array[i - 1] + fibonacci_array[i - 2];
      fibonacci_array.push_back(new_element);
    }

    cout << "Fib(" << N << ") = " << fibonacci_array[N] << endl;
  }

  return 0;
}
