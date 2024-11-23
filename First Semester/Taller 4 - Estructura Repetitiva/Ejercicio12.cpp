#include <iostream>
using namespace std;

// Función para encontrar el MCD usando el algoritmo de Euclides
int encontrarMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;

    cout << "Ingrese el valor de A: ";
    cin >> A;

    cout << "Ingrese el valor de B: ";
    cin >> B;

    // Calcular el MCD de A y B llamando a la función encontrarMCD
    int mcd = encontrarMCD(A, B);

    cout << "El MCD de " << A << " y " << B << " es: " << mcd << endl;

    return 0;
}
