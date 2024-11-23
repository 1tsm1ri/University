#include <iostream>
using namespace std;

// Solucion primer ejercicio parcial primer semestre
int main() {
    int N, i, termino = 17;

    cout << "Por favor ingrese el numero de terminos: ";
    cin >> N;

    // ++i (incrementa de manera previa) != i++ 
    for (i=1; i<=N; i++){
        // numeros pares
        if (i % 2 != 0) {
            cout << termino << " ";
            termino -= 2;
        // numeros impares
        } else {
            cout << termino << " ";
            termino += 3;
        }
    }
    
    return 0;
}
