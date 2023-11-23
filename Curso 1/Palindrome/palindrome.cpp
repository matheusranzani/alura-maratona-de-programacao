#include <iostream>
#include <algorithm>

using namespace std;
int main() {
  int t;
  int counter = 0;
  string word, temp;

  cin >> t;

  while (t--) {
    cin >> word;
    temp = word;

    reverse(word.begin(), word.end());

    if (temp == word) {
      cout << ++counter << " \"YES\"" << endl;
    } else {
      cout << ++counter << " \"NO\"" << endl;
    }
  }
  return 0;
}
