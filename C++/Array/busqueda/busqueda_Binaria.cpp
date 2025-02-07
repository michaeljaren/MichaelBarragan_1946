#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include "arrays.h"
using namespace std;
void generarArreglo(int arr[], int cantidad) {
    srand(time(0)); // Inicializa la semilla aleatoria

    for (int i = 0; i < cantidad; i++) {
        arr[i] = rand() % 20 ; // Números aleatorios entre 1 y 100
    }
}
void mostrarArreglo(int arr[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void ordenarArreglo(int arr[], int cantidad) {
    // Ordenamiento burbuja
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int buscarNumero(int arr[], int cantidad, int numero) {
    for (int i = 0; i < cantidad; i++) {
        if (arr[i] == numero) {
            return i; // Retorna la posición
        }
    }
    return -1; // Retorna -1 si no lo encuentra
}
int main() {
    int cantidad;
    cout << "Cuantos numeros aleatorios deseas generar? ";
    cin >> cantidad;
    int arr[cantidad]; // Declarar arreglo de tamaño dinámico
    generarArreglo(arr, cantidad);
    cout << "Numeros generados: ";
    mostrarArreglo(arr, cantidad);
    ordenarArreglo(arr, cantidad);
    cout << "Numeros ordenados de menor a mayor: ";
    mostrarArreglo(arr, cantidad);
    int numero;
    cout << "Introduce un numero para buscar en el arreglo: ";
    cin >> numero;
    int posicion = buscarNumero(arr, cantidad, numero);
    if (posicion != -1) {
        cout << "El numero " << numero << " se encuentra en la posicion " << posicion << "." << endl;
    } else {
        cout << "El numero " << numero << " no esta en el arreglo." << endl;
    }
}
