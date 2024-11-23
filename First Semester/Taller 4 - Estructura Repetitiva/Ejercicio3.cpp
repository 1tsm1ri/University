#include <iostream>
using namespace std;

//  Diseñar un algoritmo para escribir y sumar los números enteros desde A hasta B
// (Nota: en este caso el algoritmo NO debe asumir que A < B)

int main (){

    int A, B, suma=0;

    cout << "Digite el valor del numero entero A: ";
    cin >> A;

    cout << "Digite el valor del numero entero B: ";
    cin >> B;

    if (A>B){
        for (int i = B; i <= A; i++){
            cout << i << endl;
            suma +=i;
        }
    } else if (B>A) {
        for (int i = A; i <= B; i++) {
            cout << i << endl;
            suma += i;
        }
    }

    cout << "La suma de los entreros es: " << suma << endl;

    return 0;
}