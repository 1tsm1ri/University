#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;

/*Se tienen las notas de cuatro (4) estudiantes. Cada estudiante tiene cinco (5) notas. Le han pedido
que desarrolle un programa que permita identificar el mejor promedio de la clase.
Desarrolle un programa que permita:

• (1.0) Almacenar las notas del curso en una matriz de tamaño adecuado y llenarla de forma
aleatoria con notas entre 0 y 10 (puede asumir que las notas son números enteros).
• (1.0) Imprimir las notas de cada alumno y su promedio.
• (1.5) Ordenar e imprimir los promedios de manera descendente.
• (1.5) Identificar el mejor promedio de la clase indicando la fila cuyo promedio sea el más alto.
Si se da el caso de dos o más filas que coincidan con el promedio más alto, se deben indicar
los números de todas las filas. */

int main () {

    // Generacion de numeros aleatorios
    srand(time(NULL));

    // Datos a almacenar en la matriz 
    const int ESTUDIANTES = 4;
    const int NOTAS = 5;

    // Creacion de la matriz para almacenar los datos
    int calificaciones[ESTUDIANTES][NOTAS];

    cout << "Notas: " << endl;
    // Llenar matriz con numeros aleatorios del 0 al 10
    for (int i = 0; i < ESTUDIANTES; ++i) {
        for (int j = 0; j < NOTAS; ++j) {
            calificaciones[i][j] = rand() % 11;
            
            // Mostrar elementos de la matriz 
            cout << calificaciones[i][j] << " ";
        }
        cout << endl;
    }



    // Hallar promedio por estudiante
    cout << "Promedios: [  ";
    double promedios[ESTUDIANTES];
    double mejorPromedio = 0; 
    int mejorEstudiante = 0;

    for (int i = 0; i < ESTUDIANTES; i++) {
        int suma = 0;
            for (int j = 0; j < NOTAS; j++) {
                suma += calificaciones[i][j]; 
            }

        // Imprimir promedio por estudiante
        promedios[i] = suma / static_cast<double>(NOTAS); 
        // static_cast<double>: cambio tipo de dato 
        cout << promedios[i] << "  "; 

            // Identificar el mejor promedio de la clase (fila mejor promedio)
        if (promedios[i] > mejorPromedio) {
            mejorPromedio = promedios[i];
            mejorEstudiante = i + 1;
        }
    }
    cout << "]" << endl; 
   


    // Ordenar los promedios de manera descendente (metodo burbuja)
    cout << "Promedios ordenados: [  ";
    for (int i = 0; i < ESTUDIANTES - 1; i++) {
        for (int j = 0; j < ESTUDIANTES - i - 1; j++) {
            if (promedios[j] < promedios[j+1]) {
                double temp = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = temp;
            }
        } 
    }
    // Imprimir promedio por estudiante de manera descendente
    for (int i = 0; i < ESTUDIANTES; ++i) {
        cout << promedios[i] << "  "; 
    }
    cout << "]" << endl; 
    cout << "El mejor estudiante de la clase es el estufiante en la fila " << mejorEstudiante << endl;

    return 0;
}