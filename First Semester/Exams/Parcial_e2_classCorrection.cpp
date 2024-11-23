#include <iostream>
using namespace std;

int main() {
    // i = iterador
    // INICIAR SIEMPRE ACOMULADORES Y CONTADORES
    int N,edad, tipoCarrera, i, contMenores=0, contMujeres=0;
    double acumEdadMenores=0, acumEdadMujeres=0, promedioMenores=0, promedioMujeres=0;
    char sexo;

    cout << "Por favor digite la cantidad de parcipantes: ";
    cin >> N;

    for (i = 1; i <= N; i++) {
        cout << "Por favor digite el sexo del participante " << i << ":";
        cin >> sexo;
        cout << "Por favor digite la edad del participante " << i << ":";
        cin >> edad;
        cout << "Por favor digite el tipo de carrera (21 / 42) del participante " << i << ":";
        cin >> tipoCarrera;

        if (tipoCarrera == 21 && edad < 18) {
            acumEdadMenores += edad;
            contMenores++;
        }

        if (tipoCarrera == 42 && (sexo == 'f' || sexo == 'F')){
            acumEdadMujeres += edad;
            contMujeres++;
        }
    }

        if (contMenores > 0) {
            promedioMenores = acumEdadMenores / contMenores;
        }

        if (contMujeres > 0) {
            promedioMujeres = acumEdadMujeres / contMujeres;        
        }

    cout << "El promedio de la edad de los menores de edad en 21km es: " << promedioMenores << endl;
    cout << "El promedio de la edad de las mujeres en 42km es: " << promedioMujeres << endl;
    
    return 0;
}
