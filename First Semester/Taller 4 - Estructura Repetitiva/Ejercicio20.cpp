#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    int max = -1;
    int min = 36721;

    for (int i = 0; i < n; i++){
        int numero;
        cin >> numero;

        if (numero > max) {
            max = numero;
        }

        if (numero < min) {
            min = numero;
        }

    }

    if (max%3 == 0 || max%5 == 0) {
        cout << max << " si es divisible por tres o por cinco" << endl;
        
        } else {
        cout << max << " no es divisible por tres ni por cinco" << endl;
        }
    
    if (min%2==0) {
        cout << min << " es par" << endl;
        
    } else {
        cout << min <<  " no es par" << endl;
        
    }
        
    return 0;
}
