#include <iostream>
using namespace std;

/*El próximo fin de semana se llevará a cabo una maratón en la cual participarán N atletas. Dicha maratón tiene 
participación en diferentes modalidades: 42 kilómetros y 21 kilómetros.
La organización del evento, al momento de efectuar la inscripción de cada participante, 
le preguntó a cada uno la siguiente información:
• Sexo (Femenino - Masculino)
• Edad
• Tipo de carrera en la que iba a competir (42 o 21 kilómetros).

Realizar un programa en C++ que tenga todas las consideraciones necesarias (declaración, inicialización, lectura y 
escritura de variables) que permita recibir los datos de cada participante y mostrar en pantalla la siguiente información:
• a) (1.5) ¿Cuál es el promedio de las edades de los competidores menores de edad en la categoría 21 kilómetros?
• b) (1.5) ¿Cuál es el promedio de las edades de los competidores que son mujeres en la categoría 42 kilómetros?

(Nota: N y los datos de cada participante (sexo, edad y tipo de carrera) deben ser ingresados por el usuario).*/

int main(){

    int numeroAtletas;

    cout << "BIENVENIDO A LAS INSCRIPCIONES DE LA MARATON!" << endl;
    cout << endl;

    //Solicitud numero de participantes
    cout << "Ingrese el numero de participantes: ";
    cin >> numeroAtletas; 
    cout << endl;

    //Inicializacion variables para preguntas a y b
    int sumaEdad21 = 0, contadorMenores21 = 0;
    int sumaEdad42 = 0, contadorMujeres42 = 0;

    for (int i = 0; i < numeroAtletas; i++) {

        // modalidad 1= 42km / modalidad 2= 21km.
        int edad, modalidadCarrera;
        char sexo;

        //Solicitud de datos: sexo, edad, modalidad
        cout << "Por favor digite su genero " << endl;
        cout << "(F = Femenino y M = Masculino): ";
        cin >> sexo;
        cout << "Por favor digite su edad actual: ";
        cin >> edad;

        cout << "En que modalidad de la carrera desea competir? " << endl;
        cout << "(Digite 1 para la carrera de 42km y digite 2 para la modalidad de 21km): ";
        cin >> modalidadCarrera;

        cout << endl;
 
        // Pregunta a
        if (edad <= 18 && modalidadCarrera == 2) {
            sumaEdad21 += edad;
            contadorMenores21++;
        }

        //Pregunta b
        if (sexo == 'F' && modalidadCarrera == 2) {
            sumaEdad42 += edad;
            contadorMujeres42++;
        }
    }


    // Determinacion de promedios

    float promedioEdadMenores21 = 0.0;

        if (contadorMenores21 > 0) {
            promedioEdadMenores21 = sumaEdad21 / contadorMenores21;
        }

    float promedioEdadMujeres42 = 0.0;

        if (contadorMujeres42 > 0) {
            promedioEdadMujeres42 = sumaEdad42 / contadorMujeres42;
        }

        cout << endl;

    // Resultados obtenidos de preguntas a y b

    // • a) (1.5) ¿Cuál es el promedio de las edades de los competidores menores de edad en la categoría 21 kilómetros ?
    cout << "El promedio de edades de los competidores menores de edad es: " << promedioEdadMenores21 << " en la categoria de 21 kilometros " << endl;

    // • b) (1.5) ¿Cuál es el promedio de las edades de los competidores que son mujeres en la categoría 42 kilómetros ?
    cout << "El promedio de edades de las competidoras es: " << promedioEdadMujeres42 << " en la categoria de 42 kilometros" << endl;

    return 0;
}