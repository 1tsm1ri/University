#include <iostream>
#include <stdio.h>
#include <time.h> 
using namespace std;

// Definir constantes para el tamaño de la sala
const int fila = 10;
const int asientosPorFila = 12;
//Definir matriz para la sala
char asientosSala[fila][asientosPorFila];
// Generador de alatorios
void generacionAleatorio() {
srand(time(NULL));
}

// --> PRIMERA OPCION
// Inicializar matriz de asientos sala (funcion llenado matriz)
void inicializarAsientos(){
    for (int i = 0; i < fila; i++){
        for (int j = 0; j < asientosPorFila; j++){
            asientosSala[i][j]= rand() % 2; // numeros aleatorios entre 0 = L y 1 = R
            if (asientosSala[i][j] == 0) {
                asientosSala[i][j] = 'L';
            } else {
                asientosSala[i][j] = 'R';
            }
        }
    }
}
// Funcion que se llamara en el switch case
void visualizarAsientos(){
    cout << "Visualisacion de asientos:" << endl;
    cout << "   1  2  3  4  5  6  7  8  9 10 11 12" << endl; // Enumeracion columnas
    // Impresion de matriz
    for (int i = 0; i < fila; i++){
        cout << i + 1 << ": "; // Enumeracion de filas 
        for (int j = 0; j < asientosPorFila; j++){
            cout << asientosSala[i][j] << "  ";
        }
    cout << endl;
    }
}

// --> SEGUNDA OPCION
void reservaAsientos(int filas, int numeroAsientos){
    do {
        // Restriccion posiciones de asientos innexistentes
        // Comparacion valor usuraio y matriz
        if (filas < 1 || filas > fila || numeroAsientos < 1 || numeroAsientos > asientosPorFila) { 
            cout << "El asiento seleccionado no es valido" << endl;
            cout << "Ingrese nuevamente los datos, por favor" << endl;
                cout << "Ingrese el numero de fila: ";
                cin >> filas;
                cout << "Ingrese el numero del asiento: ";
                cin >> numeroAsientos;
        // Validacion si el asiento esta ocupado o no
        // Se resta 1 al valor ingresado por el usuario debido a que la matriz inicia en 0
        } else if (asientosSala[filas - 1][numeroAsientos - 1] == 'R'){
            cout << "Este asiento ya se encuentra reservado" << endl;
            cout << "Ingrese nuevamente los datos, por favor" << endl;
            cout << "Ingrese el numero de fila: ";
            cin >> filas;
            cout << "Ingrese el numero del asiento: ";
            cin >> numeroAsientos;
        } else  {
            (asientosSala[filas - 1][numeroAsientos - 1] = 'R');
            cout << "El asiento ha sido reservado exitosamente" << endl;
            break; // Salir del bucle
        }
    } while (true);
}

// --> TERCERA OPCION
void cancelarAsientos(int filas, int numeroAsientos){
    do {
        // Restriccion posiciones de asientos innexistentes
        // Comparacion valor usuraio y matriz
        if (filas < 1 || filas > fila || numeroAsientos < 1 || numeroAsientos > asientosPorFila) { 
            cout << "El asiento seleccionado no es valido" << endl;
            cout << "Ingrese nuevamente los datos, por favor" << endl;
                cout << "Ingrese el numero de fila: ";
                cin >> filas;
                cout << "Ingrese el numero del asiento: ";
                cin >> numeroAsientos;
        // Validacion si el asiento esta ocupado o no
        // Se resta 1 al valor ingresado por el usuario debido a que la matriz inicia en 0
        } else if (asientosSala[filas - 1][numeroAsientos - 1] == 'L'){
            cout << "Este asiento ya esta libre, no puede ser cancelado" << endl;
            cout << "Ingrese nuevamente los datos, por favor" << endl;
            cout << "Ingrese el numero de fila: ";
            cin >> filas;
            cout << "Ingrese el numero del asiento: ";
            cin >> numeroAsientos;
        } else {
            (asientosSala[filas - 1][numeroAsientos - 1] = 'L');
            cout << "El asiento ha sido cancelado exitosamente" << endl;
            break; // Salir del bucle
        }
    } while (true);
}

// --> CUARTA OPCION
void estadisticasSala(){
    int asientosReservados = 0;
    // Recorrido de la matriz, para hallar numero de asientos reservados
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < asientosPorFila; j++) {
            if (asientosSala[i][j] == 'R') {
                asientosReservados++; // incremendo en 1 cada vez que se encuentre un asiento reservado
            }
        }
    }
    cout << "El numero de asientos reservados es: " << asientosReservados << endl;
    cout << "El numero de asientos libres es: " << (fila * asientosPorFila)-asientosReservados << endl;
}

// --> QUINTA OPCION
void reservaConsecutiva(int numeroFila, int numeroAsientos){
    if (numeroFila < 1 || numeroFila > fila) { 
        cout << "El asiento seleccionado no es valido" << endl;
        return;
    }
    int asientosDisponibles = 0, inicioReserva = -1;
    // Recorrer columna en base a la fila ingresada
    for (int i = 0; i < asientosPorFila; i++) {
        if (asientosSala[numeroFila - 1][i] == 'L') {
            if (asientosDisponibles == 0) {
                inicioReserva = i; // Guardar el índice del primer asiento disponible
            }
            asientosDisponibles++; // Va sumando asientos disponibles
            if (asientosDisponibles == numeroAsientos) {
                for (int j = inicioReserva; j <= i; j++) {
                    asientosSala[numeroFila - 1][j] = 'R'; // Reservar los asientos consecutivos
                }
                cout << "Asientos reservados exitosamente." << endl;
                cout << "Se reservaron los asientos del " << inicioReserva + 1 << " al " << i + 1 << " de la fila " << numeroFila << endl;
                return;
            }
        } else {
            asientosDisponibles = 0; // Reiniciar contador si encuentra un asiento ocupado
            inicioReserva = -1; // Reiniciar el índice del primer asiento disponible
        }
    }
    cout << "No hay suficientes asientos disponibles en esta fila" << endl;
}

// --> SEXTA OPCION
void sugerenciaReserva( int numeroDeAsientos){
    bool encontrados = false;
    // Recorrer asientos y filas para obtener disponibilidad
    for (int i = 0; i < fila; i++){
        int asientosDisponibles = 0, inicioReserva = -1;
        for (int j = 0; j < asientosPorFila; j++){
            if (asientosSala[i][j] == 'L'){
                if (asientosDisponibles == 0) {
                    inicioReserva = j; // Guardar indice primer asiento disponible
                }
                asientosDisponibles++;
                if (asientosDisponibles == numeroDeAsientos) {
                    cout << "Asientos disponibles encontrados en la fila: " << i + 1 << " asientos del " << inicioReserva + 1 << " al " << j + 1 << endl;
                    encontrados = true;
                    break; // Salir del bucle al encontrar asiento disponible
                }
            } else {
                asientosDisponibles = 0; // Reiniciar contador si encuentra un asiento ocupado
            }
        }
    }
    if (!encontrados) { // ! = false, se ejecuta al no encontrar asientos consecutivos disponibles en alguna fila
        cout << "No se encontraron asientos disponibles en ninguna fila" << endl;
    }
}


int main() {

    // Llamado de funcion
    inicializarAsientos();

    // Menu disponible para el usuario:
    int opcion;

    do { // Mientras la opcion sea diferente a 7, se seguira mostrando el menu
    cout << "Bienvenido" << endl <<
    "   1. Visualizar asientos" << endl <<
    "   2. Realizar reserva de asientos" << endl <<
    "   3. Cancelar reservacion" << endl <<
    "   4. Revisar estadisticas" << endl <<
    "   5. Reserver varios asientos consecutivos" << endl <<
    "   6. Busqueda de asientos libres" << endl << 
    "   7. Salir" << endl <<
    "Por favor seleccione que desea realizar: ";
    cin >> opcion;

    switch(opcion){

        // Visualizar asientos
        case 1:
            cout << endl; 
            // Llamado a la funcion generada anteriormente
            visualizarAsientos();
            cout << endl;
            break;

        // Hacer reserva
        case 2:
            cout << endl;  
            int filas, numeroAsientos;

            cout << "Ingrese el numero de fila: ";
            cin >> filas;
            cout << "Ingrese el numero del asiento: ";
            cin >> numeroAsientos;

            // Llamado a la funcion de reserva de asientos
            reservaAsientos(fila, numeroAsientos);
            cout << endl;
            break;

        // Cancelacion de reservacion
        case 3:
            cout << endl;

            cout << "Ingrese el numero de fila: ";
            cin >> filas;
            cout << "Ingrese el numero del asiento: ";
            cin >> numeroAsientos;

            // Llamado a la funcion de cacelacion de asientos
            cancelarAsientos(fila, numeroAsientos);
            cout << endl;
            break;

        // Estadisticas de la sala
        case 4:
            cout << endl;
            // Llamado a la funcion de estadisticas de la sala
            estadisticasSala();
            cout << endl;
            break;

        // Reserva de asientos consecutivos
        case 5:
            cout << endl;
            int numeroFila, cantidadAsientos;

            cout << "Ingrese el numero de fila: ";
            cin >> numeroFila;
            cout << "Ingrese el numero de asientos que desea: ";
            cin >> cantidadAsientos;
            // Llamado a la funcion de asientos consecutuvos
            reservaConsecutiva(numeroFila, cantidadAsientos);
            cout << endl;
            break;

        // Busqueda y sugerencia de asientos libres
        case 6:
            cout << endl;
            int cantidadBuscadaAsientos;

            cout << "Ingrese el numero de asientos que desea: ";
            cin >> cantidadBuscadaAsientos;
            // Llamado a la funcion de sugerencia de asientos consecutivos
            sugerenciaReserva(cantidadBuscadaAsientos);
            cout << endl;
            break;

        // Salida del programa
        case 7: 
            cout << endl;
            cout << "Finalizando ejecucion";
            cout << endl;
            break;

        default: 
            cout << endl;
            cout << "Opcion invalida, ingrese una de las opciones anteriores";
            cout << endl;
            break;
    }

    } while (opcion != 7);
    return 0;
}