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

    int max= -823423;
    int min= 1242352;

    for (int i = 0; i < n; i++) {
        if(max < v[i]){
            max = v[i];
        }

        for (int i = 0; i < n; i++){
            if (max < v[i]){
                max=v[i];
            }
            if (min > v[i]){
                min = v[i];
            }
        }
    }

    cout << "Resta: " << max - min << endl;
    
    return 0;
}
