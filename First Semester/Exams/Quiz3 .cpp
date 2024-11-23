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

int main()
{
    //Generacion numero aleatorio
    srand(time(NULL));

    // Estudiante y numero de notas 
    const int NUMERO_ESTUDIANTES = 4; 
    const int NUMERO_NOTAS = 5; 


    /* Almacenar las notas del curso en una matriz de tamaño adecuado y llenarla de forma
    aleatoria con notas entre 0 y 10 (puede asumir que las notas son números enteros)*/

    // Matriz calificaciones 
    double calificaciones[NUMERO_ESTUDIANTES][NUMERO_NOTAS];
        for (int i = 0; i < NUMERO_ESTUDIANTES; ++i) {
            for (int j = 0; j < NUMERO_NOTAS; ++j) {
                calificaciones[i][j] = rand() % 11; // Generacion de nota entre 0 y 10
            }
        }

    // Imprimir las notas de cada alumno 
        for (int i = 0; i < NUMERO_ESTUDIANTES; i++) {
            for (int j = 0; j < NUMERO_NOTAS; j++) {
                cout << calificaciones[i][j] << " ";
            }
            cout << endl;
        }
        
     // Imprimir promedio de cada alumno.
        for (int i = 0; i < NUMERO_ESTUDIANTES; ++i) {
            double suma = 0;
            for (int j = 0; j < NUMERO_NOTAS; ++j) {
                suma += calificaciones[i][j];
            }
            double promedio = suma / NUMERO_NOTAS;
            cout << "Promedios: ";
            cout << promedio << " ";
        }

    // Ordenar e imprimir los promedios de manera descendente (metodo burbuja)
        for (int i = 0; i < NUMERO_NOTAS - 1; i++) {
            for (int j = 0; j < NUMERO_NOTAS - 1; j++) {
                if (calificaciones[i][i] < calificaciones[j][j]+1) {
                    int temp = calificaciones[j][j];
                    calificaciones[i][j] = calificaciones[j][j];
                    (calificaciones[j][j]) = temp;
                }
            }
        } 

        cout << "Promedios ordenados: ";
        for (int i = 0; i < NUMERO_NOTAS; i++) {
            for (int j = 0; j < NUMERO_NOTAS; ++j) {
                cout << calificaciones[i][j] << " ";
            }
            cout << endl;
        }


    // Identificar el mejor promedio de la clase indicando la fila cuyo promedio sea el más alto
        bool encontrado = false;
        int fila, columna;

    
        for (int i = 0; i < NUMERO_ESTUDIANTES; ++i) {
            for (int j = 0; j < NUMERO_NOTAS; ++j) {
                if (calificaciones[i][j] ) {

                }
            }
        }
 
return 0;
}