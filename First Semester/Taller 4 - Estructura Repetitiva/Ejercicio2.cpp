#include <iostream>
using namespace std;

// Diseñar un algoritmo para escribir la tabla de multiplicar del número P desde 1 hasta P.

int main (){

    int numeroP, i=1;

    cout << "Digite el valor para el numero P: ";
    cin >> numeroP;

    while (numeroP >= i) {
        cout << numeroP << "x" << i << "=" << (numeroP*i) << endl;
        i++;
    }

    return 0;
}