//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m);

int main() {
  int n, m;
  cin >> n >> m;
  int a1[n], a2[m];

  for (int i = 0; i < n; i++) {
    cin >> a1[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> a2[i];
  }

  cout << isSubset(a1, a2, n, m) << endl;
  return 0;
}

// } Driver Code Ends

int search_value(int left, int right, int *array, int value) {
  if (left > right) {
    return -1;
  }

  int middle = (left + right) / 2;

  if (value == array[middle]) {
    return middle;
  } else if (value > array[middle]) {
    return search_value(middle + 1, right, array, value);
  } else {
    return search_value(left, middle - 1, array, value);
  }

  return -1;
}

string isSubset(int a1[], int a2[], int n, int m) {
  sort(&a1[0], &a1[n]);
  sort(&a2[0], &a2[m]);

  int left = 0;

  for (int i = 0; i < m; i++) {
    int result = search_value(left++, n - 1, a1, a2[i]);

    cout << a2[i] << " " << result << endl;

    if (result == -1) {
      return "No";
    }
  }

  return "Yes";
}
