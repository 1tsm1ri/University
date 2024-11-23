#include <iostream>
using namespace std;

/*Una forma de calcular el cuadrado de los números enteros es sumar los impares de la
siguiente manera:
1 = 1
4 = 1 + 3
9 = 1 + 3 + 5
16 = 1 + 3 + 5 + 7
…
Utilizar este concepto para diseñar un algoritmo que calcule el cuadrado de los N primeros
números enteros. 
*/ 



int main (){

    int N;

    cout << "Digite el valor del numero entero N: ";
    cin >> N;

    for (int i = 1; i <= N; i++){
        
        int cuadrado= i*i;
            if (i == 1) {
                cout << cuadrado << " = " << i << endl;

            } else {

                int sum = 0;

                    for (int j = 1; sum <= cuadrado; j++){
                            if (j == 1){
                                sum += j;
                                cout << cuadrado << " = ";
                            }

                            if (j%2 != 0){
                                sum += j;
                                cout << j <<" + ";
                            }
                    }

                    cout << endl;
            }
    }


    return 0;
}