#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int ordenarBurbujav3(int v[], int n) {
    int mejora = 1;
    bool cambio = true;
    int aux, contador = 0;
    for (int i = 0; i < n && cambio; i++) {
        cambio = false;
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenarInsercion(int v[], int n) {
    int contar = 0, j, aux;
    for (int i = 1; i < n; i++) {
        aux = v[i];
        j = i - 1;
        while (j >= 0 && aux < v[j]) {
            contar++;
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
    return contar;
}

int ordenarSeleccion(int v[], int n) {
    int contar = 0, aux;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            contar++;
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    return contar;
}

void mostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

string mejorOpcion(int a, int b, int c) {
    if (a < b && a < c)
        return "Burbuja";
    else if (b < c && b < a)
        return "Insercion";
    else
        return "Seleccion";
}

int main() {
    int ne, a, b, c;
    cout << "Ingrese el numero de elementos: ";
    cin >> ne;
    int vec1[ne], vec2[ne], vec3[ne];
    
    cout << "Ingrese los elementos del vector: ";
    llenarVector(vec1, ne);
    
    for (int i = 0; i < ne; i++) {
        vec2[i] = vec1[i];
        vec3[i] = vec1[i];
    }
    
    cout << "Vector original: ";
    mostrarVector(vec1, ne);
    
    a = ordenarBurbujav3(vec1, ne);
    b = ordenarInsercion(vec2, ne);
    c = ordenarSeleccion(vec3, ne);
    
    cout << "El metodo mas eficiente fue: " << mejorOpcion(a, b, c) << endl;
    cout << "Comparaciones - Burbuja: " << a << endl;
    cout << "Comparaciones - Insercion: " << b << endl;
    cout << "Comparaciones - Seleccion: " << c << endl;
    
    cout << "Vector ordenado: ";
    mostrarVector(vec1, ne);
    
    return 0;
}
