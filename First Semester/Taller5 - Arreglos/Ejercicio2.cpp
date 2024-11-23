#include <iostream>
using namespace std;

/* Mostrar la suma de los elementos de un vector desde una posición ‘A’ (no incluida)
hasta una posición ‘B’ (incluida). A y B son ingresados por el usuario. */

int main (){

    int A, B, vector[47], suma=0;

    cout << "Digita el numero en el que desees que incie: ";
    cin >> A;

    cout << "Digita el numero en el que desee que finalice: ";
    cin >> B;

    for (int i=0; i <= A+1; i++) {
        suma += vector[i];
    }

    cout << "La suma de los elementos del vector es: " << suma << endl;
}