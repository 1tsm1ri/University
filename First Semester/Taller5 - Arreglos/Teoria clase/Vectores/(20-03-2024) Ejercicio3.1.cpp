// VECTORES
// Todos inician desde cero.

#include <iostream>
using namespace std;

int main() {

    // Los vectores pueden ser de distintas variables
    // Se debe de conocer el "n" antes de empezar a trabajar si es const --> const int n = 5
    int n;
    cout << "Ingrese la contidad de nombres que desea registrar: ";
    cin >> n;
    int* vector =new int [n];
    string* nombres=new string [n];

    for (int i = 0; i < n; i++) {
        cin >> nombres[i];
    }

    // .size = halla cuantos caracteres tiene
    // tam = variable para numeros de caracteres
    int tam = nombres[0].size();
    string menor = nombres [0];
    string mayor = nombres [0];
    double promedio = nombres[0].size();
    for (int i = 1; i < n; i++) {
        if (nombres[i].size() < tam){
            tam=nombres[i].size();
            menor = nombres[i];
        }
        if (nombres[i].size() > mayor .size()){
            mayor = nombres[i];
        }
        promedio += nombres[i].size();
    }

    cout << "El nombre mas corto es: " << menor << " ya que tiene " << tam << " caracteres" << endl;
    cout << "El nombre mas largo es: " << mayor << " ya que tiene " << tam << " caracteres" << endl;
    cout << "El promedio de la lonmgitud de lps nombres es: " << promedio << endl;

    delete[] nombres;
    delete[] vector;

    return 0;
}