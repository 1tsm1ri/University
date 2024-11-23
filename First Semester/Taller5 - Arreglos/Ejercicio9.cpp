#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n: " << endl;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese numero: ";
        cin >> v[i];
    }

    int v1[n];
    int var;

    for (int i = 0; i < n; i++){
        if (v[i]%2 ==0) {
            v1[var]= v[i];
            var++;
        }
    }

    for (int i = 0; i < n; i++){
        if (v[i]%2 != 0) {
            v1[var] = v[i];
        }
    }

    for(int i=0; i < n; i++){
        cout << v1[i] << endl;
    }
    
    return 0;
}