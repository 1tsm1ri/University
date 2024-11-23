#include <iostream>
using namespace std;

// Diseñar un algoritmo para escribir los números enteros impares del 1 al N.

int main (){

    int n, i=1;

    cout << "Por favor digite el valor del numero n: ";
    cin >> n;

    while (i <= n) {

        if (i%2 != 0) {
            cout << i << endl;

        } i++;
    }

    return 0;
}


