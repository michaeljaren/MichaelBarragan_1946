#include <iostream>
#include <algorithm>

using namespace std;

// Función para llenar el vector con números ingresados por el usuario
void llenaDatos(int v[], int n) {
    cout << "Ingrese los " << n << " elementos del array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

// Función para mostrar los datos del vector
void VerDatos(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Función de búsqueda binaria
bool isBusquedaBinaria(int v[], int n, int elemento) {
    int Iabajo = 0, Iarriba = n - 1;
    while (Iabajo <= Iarriba) {
        int Icentro = (Iarriba + Iabajo) / 2;
        if (v[Icentro] == elemento) {
            return true; // Elemento encontrado
        }
        if (v[Icentro] < elemento) {
            Iabajo = Icentro + 1;
        } else {
            Iarriba = Icentro - 1;
        }
    }
    return false; // Elemento no encontrado
}

int main() {
    int ne, dato;
    cout << "Ingrese el numero de elementos del array: ";
    cin >> ne;

    int vector[ne];
    llenaDatos(vector, ne);

    // Ordenar el array antes de la búsqueda binaria
    sort(vector, vector + ne);
    cout << "Vector ordenado: ";
    VerDatos(vector, ne);

    cout << "Ingrese el dato a buscar: ";
    cin >> dato;

    if (isBusquedaBinaria(vector, ne, dato)) {
        cout << "Dato encontrado" << endl;
    } else {
        cout << "Dato no encontrado" << endl;
    }
    return 0;
}
