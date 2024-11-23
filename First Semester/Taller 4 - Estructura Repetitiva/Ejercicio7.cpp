#include <iostream>
using namespace std;

// Diseñar un algoritmo para que, dados N y L, elevar NL sin usar la función de elevar. Por ejemplo 3^4 es 3x3x3x3

int main (){

    long N, L, i, resultado=1;

    cout << "Digite el valor de N: ";
    cin >> N;

    cout << "Digite el valoe de L: ";
    cin >> L;

    for (i=1; i <=L; i++){
        resultado *= N;
    }

    cout << "El resultado de " << N << " elevado a la " << L << " es: " << resultado << endl;

    return 0;
}