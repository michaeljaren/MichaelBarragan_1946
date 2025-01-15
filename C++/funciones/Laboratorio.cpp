#include <iostream>
using namespace std;

int sumaDivisores(int numero) {
    int suma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma;
}

// Función para saber si es numero es abundate
bool esAbundante(int numero) {
    return sumaDivisores(numero) > numero;
}

// Función para verificar si el número es deficiente
bool esDeficiente(int numero) {
    return sumaDivisores(numero) < numero;
}

// Función para verificar si dos números son amigos
bool sonAmigos(int num1, int num2) {
    return (sumaDivisores(num1) == num2) && (sumaDivisores(num2) == num1);
}

int main() {
    bool entrar = true;
    int op, cantNumero;

    while (entrar) {
        cout << "Menu de opciones" << endl;
        cout << "1. Numeros abundantes" << endl;
        cout << "2. Numeros deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> op;

        if (op >= 1 && op <= 3) {
            cout << "Ingrese la cantidad de numeros: ";
            cin >> cantNumero;
        }

        switch (op) {
        case 1: {                           // Números abundantes
            int contador = 0, nverificador = 2;
            while (contador < cantNumero) {
                if (esAbundante(nverificador)) {
                    cout << "Abundante: " << nverificador << endl;
                    contador++;
                }
                nverificador++;
            }
            break;
        }

        case 2: {                           // Números deficientes
            int contador = 0, nverificador = 2;
            while (contador < cantNumero) {
                if (esDeficiente(nverificador)) {
                    cout << "Deficiente: " << nverificador << endl;
                    contador++;
                }
                nverificador++;
            }
            break;
        }

        case 3: {                           // Números amigos
            int contador = 0, nverificador = 2;
            while (contador < cantNumero) {
                int sum1 = sumaDivisores(nverificador);
                if (nverificador < sum1 && sonAmigos(nverificador, sum1)) {
                    cout << "Amigos: " << nverificador << " y " << sum1 << endl;
                    contador++;
                }
                nverificador++;
            }
            break;
        }

        case 4:
            entrar = false;
            break;

        default:
            cout << "El valor no es valido" << endl;
        }

        if (op != 4) {
            system("pause");
            system("cls");
        }
    }

    return 0;
}
