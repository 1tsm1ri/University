#include <iostream>
// Generar aleatorio
#include <time.h>
#include <stdio.h>
using namespace std;

int main() {

    int vector [20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
     vector[i] = 1 + rand() % 100;
    }

    for (int j = 0; j < 20; j++){
        cout << vector[j] << " ";
    }

    return 0;
}