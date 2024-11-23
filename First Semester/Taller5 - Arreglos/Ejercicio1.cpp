/* Crear un programa que contenga un vector de 50 números enteros (aleatorios entre 0 y
100), el usuario debe ingresar un número entero (entre 0 y 100) y se debe mostrar en
consola la posición de la primera ocurrencia del elemento dentro del vector. En caso de
no encontrarse el elemento, se debe mostrar en pantalla el mensaje “El elemento no se
encuentra en el vector”. */

#include <iostream>
#include <stdio.h> // la importamos para crear numeros aletorios 
#include <time.h> // crear numeros aleatorios 
using namespace std;

int main () {

    //semilla del aletorio 
    srand(time(NULL));

    int vector[50];

    // llenando vector 
    for (int i = 0; i <= 50; i++) {
        vector[i] = rand() % 101; // numeros aleatorios entre 0 y 100

    // peticion datos usuario
    int valorUsuario;
    cout << "Por favor ingrese un numero entero entre el 0 y el 100";
    cin >> valorUsuario;

    // refien definido = falso
    bool valorVector;

    for (int i = 0; i <= 50; i++) {
        
        }

    return 0;
}