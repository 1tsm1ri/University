#include <iostream>
using namespace std;

/* Elaborar un algoritmo que genere los primeros N términos de la sucesión: 17 15 18 16 19 17 20 18 21…
(Nota: N debe ser ingresado por el usuario). */

int main() {

    int n, primero=17;
    int aux = primero;

    cout << "Por favor ingrese el valor de N (debe ser un numero natural): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if (i % 2 != 0) {
            cout << primero << " ";
            primero -= 2;
        } else {
            cout << primero << " ";
            primero += 3;
        }
    }
 
    return 0;

}