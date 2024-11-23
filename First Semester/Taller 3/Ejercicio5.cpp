#include <iostream>
using namespace std;

/* Realice un programa que lea 2 números por consola y determine los siguientes aspectos:
• Si los dos números son iguales
• Si los dos números son diferentes
• Si el primero es mayor que el segundo
• Si el segundo es mayor o igual que el primero
• Si la condición no se da, se tiene que mostrar true y para el caso 
contrario false. Así para cada una de las 4 condiciones a evaluar. */

int main (){

    int numero1, numero2;

    cout << "Digite el valor del primer numero: ";
    cin >> numero1;
    cout << "Digite el valor del segundo numero: ";
    cin >> numero2;

    if (numero1 == numero2) {
        cout << "El primer termino (" << numero1 << ") es igual al segundo termino (" << numero2 << ")" << endl;
    } else {
        cout << "El primer termino (" << numero1 << ") es diferente al segundo termino (" << numero2 << ")" << endl;
    }

    if (numero2 >= numero1) {
        cout << "El primer termino (" << numero1 << ") es diferente al segundo termino (" << numero2 << ")" << endl;
    }

return 0;
}