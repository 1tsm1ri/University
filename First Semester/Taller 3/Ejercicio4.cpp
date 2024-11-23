#include <iostream>
#include <CMATH>
using namespace std;

/* Desarrolle un programa que cumpla con el siguiente algoritmo:
• Pedir por consola un valor que represente un radio (puede tener decimales) 
y mostrar a partir de este el perímetro del circulo.
• Pedir un valor tanto para el ancho como el largo de un rectángulo o cuadrado
y mostrar el área de la figura.
• Pedir la base, la altura y la profundidad de un cubo y mostrar por consola el
volumen de este. */

int main (){

    // PERIMETRO CIRCULO.
    double valorRadio, perimetroCirculo;
    cout << "Digite el valor el radio del circulo: ";
    cin >> valorRadio;
    perimetroCirculo = 2 * M_PI * valorRadio;
    cout << "El perimetro del circulo es: " << perimetroCirculo << endl;
    cout << endl;


    // AREA DE UN CUADRADO O RECTANGULO.
    double baseCuadrilatero, alturaCuadrilatero, area;
    cout << "Digite el valor de la base de la figura: ";
    cin >> baseCuadrilatero;
    cout << "Digite eñ valor de la altura de la figura: ";
    cin >> alturaCuadrilatero;
    area = baseCuadrilatero * alturaCuadrilatero;

    if (baseCuadrilatero == alturaCuadrilatero) {
        cout << "EL valor del area del cuadrado es: " << area << endl;
    } else {
        cout << "El valor del area del rectangulo es: " << area << endl;
    }
    cout << endl;


    // VOLUMEN DEL CUBO.
    double baseCubo, alturaCubo, profundidadCubo, volumen;
    cout << "Digita el valor de la base del cubo: ";
    cin >> baseCubo;
    cout << "Digite el valor de la altura del cubo: "; 
    cin >> alturaCubo;
    cout << "Digite el valor de la profundidad del cubo: ";
    cin >> profundidadCubo;

    if (baseCubo == alturaCubo && alturaCubo == profundidadCubo) {
        volumen = baseCubo * alturaCubo * profundidadCubo;
        cout << "El volumen del cubo es: " << volumen << endl;
    } else {
        cout << "ERROR: Los valores del cubo deben de tener las mismas dimensiones" << endl;
    }
    cout << endl;

    return 0;
}