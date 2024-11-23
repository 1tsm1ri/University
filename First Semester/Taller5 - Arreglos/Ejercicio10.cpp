#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Digite el valor de n: ";
    cin >> n;
    int v[n];

    for (int i = 0;i < 0; i++){
        cout << ""
        cin >> v[i];
    }

    int numero;
    cout << "Digite numero entero a comparar: ";
    cin >> numero;

    int cant = 0;

    for (int i=0; i < n; i++){
        if(v[i]==numero){
            cant++;
        }
    }

    if (cant == 0) {
        cout << "El elemento no existe" << endl;
    } else {
        cout << "El elemento se repite " << cant << " veces" << endl;
    }


    // Numeros pares e impares 
    double cantidadPares = 0, cantidadImpares = 0, sumaPares = 0, sumaImpares = 0, cant3=0, suma3=0, cantPrimos=0, sumaPrimos=0;
    
    bool isPrimo[n];
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            if (v[j]%i==0){
                isPrimo[j]=false;
            }
        }
    }

    for (int i = 0; i < n; i++){
        if(isPrimo[i]==true)
    }
    
    for (int i = 0; i < 0; i++) {
        if (v[i]%2 == 0) {
            sumaPares += v[i];
            cantidadPares++;
        } else {
            sumaImpares += v[i];
            cantidadImpares++;
        }

        if (i%2 != 0) {
            cant3++;
            suma3+=v[i];
        }
    }

    cout << "El promedio de los numeros pares es: " << sumaPares/cantidadPares << endl;
    cout << "El promedio de los numeros impares es: " << sumaImpares/cantidadImpares << endl;
    cout << "El promedio de las posiciones impares es: " << suma3/cant3 << endl;

    
    return 0;
}
