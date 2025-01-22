#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Llena el vector con números aleatorios entre 1 y 20
void llenaVector(int v[], int n) {
    srand(time(NULL)); // Semilla para la generación de números aleatorios
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20 + 1; // Números entre 1 y 20
    }
}

// Ordena el vector usando el método de la burbuja
void ordenaBurbuja(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                // Intercambio de elementos
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

// Muestra los elementos del vector
void muestraVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Función principal
int main() {
    int ne;
    cout <<"Ingresa numero de elementos" << endl;
    cin >> ne;
    int v[ne];
    llenaVector(v, ne);
    cout << "Vector original: ";
    muestraVector(v, ne);
    ordenaBurbuja(v, ne);
    cout << "Vector ordenado: ";
    muestraVector(v, ne);
    return 0;
}

