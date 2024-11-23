#include <iostream>
using namespace std;

int main() {

    double nota, promedioGana, promedioPierde, acumuladorGana=0, acumuladorPierde=0;
    int contadorGana=0, contadorPierde=0;
    char opcion;
    
    do {

    cout << "Por favor ingrese la nota final de matematicas: ";
    cin >> nota;

        if (nota >= 3.0) {
            acumuladorGana += nota;
            contadorGana++;
            
        } else {
            acumuladorPierde += nota;
            contadorPierde++;
        }

        cout << "Desea ingresar mas notas? (S/N): ";
        cin >> opcion;
        
    } while (opcion != 'N' && opcion != 'n');


    promedioGana = acumuladorGana/contadorGana;
    promedioPierde = acumuladorPierde/contadorPierde;

    cout << "En total " << contadorGana << " estudiantes ganaron matematicas y el promedio fue: " << promedioGana << endl;
    cout << "En total " << contadorPierde << " estudiantes perdieron matematicas y el promedio fue: " << promedioPierde << endl;
    
    return 0;
}
