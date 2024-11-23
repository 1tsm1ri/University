#include <iostream>
using namespace std;

/* Desarrolle un programa que permita ingresar 3 números enteros por consola.
Calcular el promedio de estos 3 números y muestre el resultado en la consola */

int main (){

    int numero1, numero2, numero3;
    double promedio;

    cout << "INGRESE A CONTINUACION 3 VALORES PARA PROMEDIARLOS" << endl;
    cout << "Ingrese el valor del primer numero: ";
    cin >> numero1;
    cout << "Ingrese el valor del segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el valor del tercer numero: ";
    cin >> numero3;

    promedio = (numero1 + numero2 + numero3)/3;

    cout << "El promedio de las tres cantidades ingresadas son: " << promedio << endl;

return 0;
}