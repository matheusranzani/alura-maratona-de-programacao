#include <iostream>
using namespace std;

int quantas_notas(int *valor, int nota){
    int numero_notas = *valor/nota;
    *valor = *valor%nota;
    return numero_notas;
}

int main (){
    int valor, teste = 1;
    cin >> valor;
    while(valor > 0){
        int notas[] = {50, 10, 5, 1};
        cout << "Teste " << teste << endl;
        for(int i=0;i<4;i++)
            cout << quantas_notas(&valor, notas[i]) << " ";
        cout << endl << endl;

        cin >> valor;
        teste++;
    }
    return 0;
}
