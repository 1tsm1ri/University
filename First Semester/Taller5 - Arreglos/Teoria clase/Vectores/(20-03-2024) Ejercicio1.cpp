// VECTORES
// Todos inician desde cero.

#include <iostream>
using namespace std;

int main() {

    const int n = 19;
    int vector[n];

    for (int i = 0; i < n; i++) {
        vector [i] = (i + 1)*5;
    }
    for (int i = 0;  i < n; i++) {
        cout << vector[i] << "\t";
    }

    return 0;
}