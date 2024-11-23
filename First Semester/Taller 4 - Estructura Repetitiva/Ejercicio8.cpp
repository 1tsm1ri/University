#include <iostream>
#include <cmath>
using namespace std;

/* Diseñar un algoritmo para, dada la función: 𝑌 = 𝑋
3 − 5𝑋^2 + 7𝑋 – 8, calcule todos los valores de Y para X 
desde -4.0 hasta 4.0 con incrementos de 0.2. El algoritmo debe
escribir las parejas de valores de X y Y correspondientes. */

int main (){


    for (float i = -4.0; i <= 4.0; i += 0.2 ){
        float valorY = pow(i,3)+5 * pow(i,2)+7*i-8;
        cout << valorY << endl;
    }

    return 0;
}