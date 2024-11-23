#include <iostream>
#include <stdio.h> // la importamos para crear numeros aletorios 
#include <time.h> // crear numeros aleatorios 
using namespace std;

int main() {
    int vectoresEnteros[10];
    int suma=0, mayor=0, menor=101;
    double promedio; 

    //semilla del aletorio 
    srand(time(NULL));

    // creando vector 
    for (int i = 0; i < 10; i++) {
        vectoresEnteros[i] = 1 + rand() % 100; // numeros aleatorios entre 1 y 100
        suma += vectoresEnteros[i]; // acumulacion de valores
        if (i==0) { 
            menor = vectoresEnteros[i];
            mayor = vectoresEnteros[i];
            } else {
                if (mayor < vectoresEnteros [i]) { 
                mayor = vectoresEnteros[i];
                }
                if (menor > vectoresEnteros [i]) {
                menor = vectoresEnteros[i];
                }
        }
    }

    // imprimiendo vector
    for (int j = 0; j < 10; j++) { 
        cout << vectoresEnteros[j] << " ";
    }

    cout << "\nLa suma de los elementos es: " << suma << endl;

    promedio = suma / 10.0; // 10.0 para que de resultado decimal 
    cout << "El promedio de los elementos es: " << promedio << endl;
    cout << "El elemento menor es: " << menor << endl;
    cout << "El elemento mayor es: " << mayor << endl;

    return 0;
}
