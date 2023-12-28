/**
 * Usar cin/cout e vector do C++ pode deixar a execução mais lenta.
 * Portanto, às vezes é necessário usar scanf/printf e vetores normais de C.
*/

#include <iostream>
#include <cstdlib>
// #include <vector>

using namespace std;

int binary_search(int *values, int query, int left, int right) {
  if (left > right) {
    return -1;
  }

  if (left == right) {
    if (values[left] == query) {
      return left;
    }

    return -1;
  }

  int middle = (left + right) / 2;

  if (query == values[middle]) {
    return binary_search(values, query, left, middle);
  } else if (query < values[middle]) {
    return binary_search(values, query, left, middle - 1);
  } else {
    return binary_search(values, query, middle + 1, right);
  }
}

int main() {
  int N, Q;

  // cin >> N >> Q;
  scanf("%d %d", &N, &Q);

  int *values = (int *)malloc(N * sizeof(int));

  int n = N, i = 0;
  while (n--) {
    // cin >> value;
    scanf("%d", &values[i++]);
  }

  while (Q--) {
    int q;
    // cin >> q;
    scanf("%d", &q);

    int result = binary_search(values, q, 0, N - 1);

    // cout << result << endl;
    printf("%d\n", result);
  }

  return 0;
}
