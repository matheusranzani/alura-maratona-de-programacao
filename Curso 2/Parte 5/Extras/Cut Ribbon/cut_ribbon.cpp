#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 4009;
const int INF = 100000;
const int NOT_CALCULATED = -1;

int memoization[MAXN];

int a, b, c;

int max_pieces(int n) {
  if (memoization[n] != NOT_CALCULATED) {
    return memoization[n];
  }

  memoization[n] = -inf;

  if (a <= n) {
    memoization[n] = max(memoization[n], 1 + max_pieces(n - a));
  }

  if (b <= n) {
    memoization[n] = max(memoization[n], 1 + max_pieces(n - b));
  }

  if (c <= n) {
    memoization[n] = max(memoization[n], 1 + max_pieces(n - c));
  }

  return memoization[n];
}

int main() {
  int n;

  cin >> n >> a >> b >> c;

  memset(memoization, NOT_CALCULATED, sizeof(memoization));

  memoization[0] = 0;

  cout << max_pieces(n) << endl;

  return 0;
}
