#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenVector(int v[], int ne) {
    srand(time(NULL));
    for (int i = 0; i < ne; i++) {
        v[i] = rand() % 10; // Genera números entre 0 y 9
    }
}

void verVector(int v[], int ne) {
    for (int i = 0; i < ne; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool buscar(int v[], int ne, int num) {
    for (int i = 0; i < ne; i++) {
        if (v[i] == num) {
            return true;
        }
    }
    return false;
}

void jugar() {
    int v[5], num;
    llenVector(v, 5); // Llenar el vector con 5 elementos

    for (int i = 1; i <= 3; i++) {
        cout << "Introduce un numero (intento No. " << i << "): ";
        cin >> num;

        if (buscar(v, 5, num)) {
            cout << "Has ganado!" << endl;
            return; // Salir de la función si se gana
        } else {
            cout << "Lo siento, has fallado. Intenta de nuevo." << endl;
        }
    }

    // Si se llega aquí, el usuario ha perdido
    cout << "Has perdido. Los números correctos eran: ";
    verVector(v, 5);
}

int main() {
    jugar();
    return 0;
}
