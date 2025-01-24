//https://github.com/michaeljaren/MichaelBarragan_1946
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL)); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void copiaVector(int origen[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[i];
    }
}

int ordenaBurbujaV1(int v[], int n) {
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

int ordenaBurbujaV2(int v[], int n) {
    int mejora = 1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujaV3(int v[], int n) {
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

void muestraVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void mejorVersion(int v1, int v2, int v3) {
    cout << "\nComparaciones:\n";
    cout << "Burbuja V1: " << v1 << "\n";
    cout << "Burbuja V2: " << v2 << "\n";
    cout << "Burbuja V3: " << v3 << "\n";

    if (v1 <= v2 && v1 <= v3) {
        cout << "La mejor version es V1 con " << v1 << " comparaciones.\n";
    } else if (v2 <= v1 && v2 <= v3) {
        cout << "La mejor version es V2 con " << v2 << " comparaciones.\n";
    } else {
        cout << "La mejor version es V3 con " << v3 << " comparaciones.\n";
    }
}

int main() {
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;

    int vec[ne], copia[ne];
    llenaVector(vec, ne);

    
    copiaVector(vec, copia, ne);

    cout << "Vector original: ";
    muestraVector(vec, ne);

    copiaVector(vec, copia, ne);
    int comparacionesV1 = ordenaBurbujaV1(copia, ne);

    copiaVector(vec, copia, ne);
    int comparacionesV2 = ordenaBurbujaV2(copia, ne);

    copiaVector(vec, copia, ne);
    int comparacionesV3 = ordenaBurbujaV3(copia, ne);

    // Determinar la mejor versión
    mejorVersion(comparacionesV1, comparacionesV2, comparacionesV3);

    cout << "\nVector ordenado = ";
    muestraVector(copia, ne);

    return 0;
}
