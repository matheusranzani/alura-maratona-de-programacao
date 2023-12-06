#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  vector<int> numbers;

  cin >> n;

  int aux = n;
  while (aux--) {
    int number;

    cin >> number;

    numbers.push_back(number);
  }

  sort(numbers.begin(), numbers.end());

  cout << numbers[(n - 1) / 2] << endl;

  return 0;
}
