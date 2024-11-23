#include <iostream>
using namespace std;

/* Realice un programa que cumpla el siguiente algoritmo:
• Guarda en una variable numeroMagico el valor 12345679 (sin el 8)
• Lee por consola otro y guárdelo en numeroUsuario, tiene que ser entre 1 y 9
• Multiplica el numeroUsuario por 9 en sí mismo
• Multiplica el numeroMagico por el numeroUsuario en sí mismo
• Finalmente muestra el valor final del numeroMagico por consola */

int main (){

    int numeroMagico = 12345679, numeroUsuario;

    cout << "Por favor digite un numero del 1 al 9 por favor: ";
    cin >> numeroUsuario;

    if (numeroUsuario >= 1 && numeroUsuario <= 9) {
        numeroUsuario = numeroUsuario * 9;
        numeroMagico = numeroMagico * numeroUsuario;
        cout << "El numero magico generado es: " << numeroMagico << endl;

    } else { 
        cout << "ERROR el valor ingresado no se encuentra entre el 1 y el 9" << endl;
    }

return 0;
}