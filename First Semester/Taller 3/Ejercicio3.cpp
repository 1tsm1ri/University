#include <iostream>
using namespace std;

/* En un colegio el 100% de una materia se divide en las siguientes notas:
• Nota 1 y nota 2 cada una del 20%.
• Nota 3 y 4 cada una del 30%
Realice un programa para calcular la nota final de un estudiante. Para ingresar
cada nota se tiene que hacer mediante la consola y mostrar el resultado en la
misma. Tener en cuenta que las notas pueden tener decimales. */

int main (){

    double nota1, nota2, nota3, nota4, notaFinal, promedio;

    cout << "REGISTRA TUS NOTAS PARA OBTENER TU PROMEDIO Y NOTA FINAL" << endl;

    // PRIMERA NOTA.
    cout << "Ingrese el valor de su primera nota: ";
    cin >> nota1;
    if (nota1 >= 0.0 && nota1 <= 5.0){
        cout << "La primera nota ingresada es: " << nota1 << endl;
    } else {
        cout << "La nota debe de estar entre 0 y 5" << endl;
        return 0;
    }

    // SEGUNDA NOTA.
    cout << "Ingrese el valor de su primera nota: ";
    cin >> nota2;
    if (nota2 >= 0.0 || nota2 <= 5.0){
        cout << "La primera nota ingresada es: " << nota2 << endl;
    } else {
        cout << "La nota debe de estar entre 0 y 5" << endl;
        return 0;
    }

    // TERCERA NOTA.
    cout << "Ingrese el valor de su primera nota: ";
    cin >> nota3;
    if (nota3 >= 0.0 || nota3 <= 5.0){
        cout << "La primera nota ingresada es: " << nota3 << endl;
    } else {
        cout << "La nota debe de estar entre 0 y 5" << endl;
        return 0;
    }

    // CUARTA NOTA.
    cout << "Ingrese el valor de su primera nota: ";
    cin >> nota4;
    if (nota4 >= 0.0 || nota4 <= 5.0){
        cout << "La primera nota ingresada es: " << nota4 << endl;
    } else {
        cout << "La nota debe de estar entre 0 y 5" << endl;
        return 0;
    }

    cout << endl;

    notaFinal = (nota1*0.2 + nota2*0.2 + nota3*0.3 + nota4*0.3);
    promedio = (notaFinal / 5) * 100;

    cout << "Su nota final es de: " << notaFinal << endl;
    cout << "Su promedio estudiantil es: " << promedio << endl;

    return 0;
}
