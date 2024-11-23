#include <iostream>
using namespace std;

// Diseñar un algoritmo para calcular los cuadrados y los cubos de los N primeros números enteros.

int main (){

    int N, i=1;

    cout << "Digita el un numero entero: ";
    cin >> N;

    for (int i=1; i <=N; i++){
        int cuadrado = i*i;
        int cubo = i*i*i;
        cout << "El resultado de " << i << " al cuadrado es " << cuadrado << endl;
        cout << "El resultado de " << i << " al cubo es " << cubo << endl;
    }

    return 0;
}
