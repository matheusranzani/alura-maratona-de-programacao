#include <iostream>

using namespace std;

int main() {
  int N, teste = 1;

  while (cin >> N) {
    if (N == 0) break;

    string jogador1, jogador2;

    cin >> jogador1 >> jogador2;

    cout << "Teste " << teste++ << endl;

    while (N--) {
      int A, B;

      cin >> A >> B;

      if ((A + B) % 2 == 0) {
        cout << jogador1;
      } else {
        cout << jogador2;
      }

      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
