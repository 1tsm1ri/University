#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese el valor de N: ";
    cin >> n;

    bool flag = true;

    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            flag = false;
        }
    }

    if (flag == true) {
        cout << n << " es primo" << endl;
        
    } else {
        cout << n << " no es primo" << endl;
    }
    
    return 0;
}
