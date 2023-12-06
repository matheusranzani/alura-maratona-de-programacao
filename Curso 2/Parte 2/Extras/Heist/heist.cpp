#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  vector<int> keyboards;

  cin >> n;

  int aux = n;
  while (aux--) {
    int a;
    cin >> a;

    keyboards.push_back(a);
  }

  sort(keyboards.begin(), keyboards.end());

  cout << (keyboards[n - 1] - keyboards[0]) - n + 1 << endl;

  return 0;
}
