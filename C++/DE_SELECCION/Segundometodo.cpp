#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector> // Para usar vector
using namespace std;

void llenaVector(int v[], int n){
    srand(time(NULL)); // función semilla para generar números aleatorios
    for (int i = 0; i < n; i++){
        v[i] = rand() % 20 + 1; // Llena el vector con números aleatorios entre 1 y 20
    }
}

void verVector(int v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

int ordenaInsercion(int v[], int n){
    int contador = 0, aux;
    for (int i = 1; i < n; i++){
        aux = v[i];
        int j = i - 1;
        while (j >= 0 && aux < v[j]){
            v[j + 1] = v[j];
            j--;
            contador++;
        }
        v[j + 1] = aux;
    }
    return contador; // Devuelve el número de comparaciones realizadas en el algoritmo.
}

int main(){
    int ne, comparaciones;
    cout << "Ingresa el número de elementos del vector: ";
    cin >> ne;
    vector<int> vec(ne); // Usamos un vector dinámico
    llenaVector(vec.data(), ne); // Usamos data() para pasar el puntero al arreglo
    cout << "Vector original: \n";
    verVector(vec.data(), ne);
    comparaciones = ordenaInsercion(vec.data(), ne);
    cout << "\nVector ordenado: \n";
    verVector(vec.data(), ne);
    cout << "El número de comparaciones = " << comparaciones << endl;
    return 0;
}
