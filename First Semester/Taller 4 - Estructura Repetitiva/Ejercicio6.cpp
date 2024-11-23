#include <iostream>
using namespace std;

/* Elaborar un algoritmo que genere los primeros N términos de la sucesión: 17 15 18 16
19 17 20 18 21… (Nota: N debe ser ingresado por el usuario). */

int main (){

    int n;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    int primerTermino=17;
    int aux = primerTermino;

    for (int i = 1; i <= n; i++){

        if (i%2 != 0){
            cout << primerTermino << " ";
            primerTermino-=2;

        } else {
            cout << primerTermino << " ";
            primerTermino += 3;
        }
    }

    return 0;
}