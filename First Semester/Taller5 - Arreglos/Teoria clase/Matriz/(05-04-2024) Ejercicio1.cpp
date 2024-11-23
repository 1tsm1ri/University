#include <iostream>
#include <stdio.h> // la importamos para crear numeros aletorios 
#include <time.h> // crear numeros aleatorios 
using namespace std;


int main() {
    // Primer= Filas, Segundo= Columnas
    int matriz[10][15];
    int suma=0, menor, filaMenor, columnaMenor, totalElementos;
    double promedio;

    srand(time(NULL));

    // Llenar datos
    for (int i=0; i <10; i++) {
        // suma = 0;
        for (int j = 0; j <=14; j++) {
            matriz[i][j] = 50 + rand() % 51; // rand = numeros aleatorios / % 51 = genera numeros entre cero y N-1 (51-1)
            suma += matriz[i][j]; // suma += matriz [j][i] --> para recorrer columnas

            // Hallar valor menor, junto a la ubicacion en la fila y columna.
            if (i == 0 && j == 0) {
                menor = matriz[i][j];
                filaMenor = i;
                columnaMenor = j;
            } else if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                filaMenor = i;
                columnaMenor = j;
            }
        }
    }

    // imprimir datos
    for (int i=0; i <10; i++) {

        for (int j = 0; j <=14; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Calcular promedio
    totalElementos = 10 * 15;
    promedio = suma / totalElementos;


    cout << "La suma de los elementos es: " << suma << endl;
    cout << "El promedio de los elementos de la matriz es: " << promedio << endl;
    cout << "El menor valor de la matriz es: " << menor << endl;
    cout << "La ubicacion en la fila es: " << filaMenor << " y en la columna es: " << columnaMenor << endl;

return 0;
}
