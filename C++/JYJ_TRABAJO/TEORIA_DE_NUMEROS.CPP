#include <iostream> //para mostrar la informacion en la pantalla
#include <vector>  // permite almacenar elementos de un mismo tipo
#include <cmath> // para usar funciones matematicas 
#include <cstdlib> // para repetir la lista
using namespace std;

// Funcion para calcular el MCD usando el Algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funcion para calcular el MCM usando la relacion con el MCD
int calcularMCM(int a, int b) {
    return (a * b) / calcularMCD(a, b);
}

// Funcion para verificar si un numero es primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Funcion para listar los numeros primos en un rango
vector<int> primosEnRango(int inicio, int fin) {
    vector<int> primos;
    for (int i = inicio; i <= fin; ++i) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }
    return primos;
}

// Funcion para descomponer un numero en factores primos
vector<int> factoresPrimos(int n) {
    vector<int> factores;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factores.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factores.push_back(n);
    return factores;
}

// Funcion para calcular la suma de los divisores de un numero
int sumaDivisores(int n) {
    int suma = 1; // 1 siempre es divisor
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            suma += i;
            if (i != n / i) suma += n / i; // Evitar contar el divisor dos veces
        }
    }
    return suma;
}

// Funcion para verificar si un numero es perfecto
bool esPerfecto(int n) {
    return sumaDivisores(n) == n;
}

// Funcion para calcular el cociente y residuo (Expresion de Euclides)
void cocienteResiduo(int a, int b, int &q, int &r) {
    q = a / b;
    r = a % b;
}

// Menu de lista 
int main() {
    int opcion;
    do {
        cout << "\n========== Teoria de Numeros ==========" << endl;
        cout << "1. Calcular MCD" << endl;
        cout << "2. Calcular MCM" << endl;
        cout << "3. Verificar si un numero es primo" << endl;
        cout << "4. Listar numeros primos en un rango" << endl;
        cout << "5. Descomponer en factores primos" << endl;
        cout << "6. Suma de divisores" << endl;
        cout << "7. Verificar si un numero es perfecto" << endl;
        cout << "8. Calcular cociente y residuo" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int a, b;
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
                cout << "El MCD de " << a << " y " << b << " es: " << calcularMCD(a, b) << endl;
                break;
            }
            case 2: {
                int a, b;
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
                cout << "El MCM de " << a << " y " << b << " es: " << calcularMCM(a, b) << endl;
                break;
            }
            case 3: {
                int n;
                cout << "Ingrese un numero: ";
                cin >> n;
                if (esPrimo(n)) {
                    cout << n << " es primo." << endl;
                } else {
                    cout << n << " no es primo." << endl;
                }
                break;
            }
            case 4: {
                int inicio, fin;
                cout << "Ingrese el inicio del rango: ";
                cin >> inicio;
                cout << "Ingrese el fin del rango: ";
                cin >> fin;
                vector<int> primos = primosEnRango(inicio, fin);
                cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
                for (int primo : primos) {
                    cout << primo << " ";
                }
                cout << endl;
                break;
            }
            case 5: {
                int n;
                cout << "Ingrese un numero: ";
                cin >> n;
                vector<int> factores = factoresPrimos(n);
                cout << "Factores primos de " << n << ": ";
                for (int factor : factores) {
                    cout << factor << " ";
                }
                cout << endl;
                break;
            }
            case 6: {
                int n;
                cout << "Ingrese un numero: ";
                cin >> n;
                cout << "La suma de los divisores de " << n << " es: " << sumaDivisores(n) << endl;
                break;
            }
            case 7: {
                int n;
                cout << "Ingrese un numero: ";
                cin >> n;
                if (esPerfecto(n)) {
                    cout << n << " es un numero perfecto." << endl;
                } else {
                    cout << n << " no es un numero perfecto." << endl;
                }
                break;
            }
            case 8: {
                int a, b, q, r;
                cout << "Ingrese el dividendo (a): ";
                cin >> a;
                cout << "Ingrese el divisor (b): ";
                cin >> b;
                if (b != 0) {
                    cocienteResiduo(a, b, q, r);
                    cout << a << " = " << b << " * "<< q << " + " << r << endl;
                    cout << "Cociente: " << q << ", Residuo: " << r << endl;
                } else {
                    cout << "El divisor no puede ser 0." << endl;
                }
                break;
            }
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                break;
        }

        // Pausar y esperar para continuar
        if (opcion != 0) {
            system("pause");
        }

    } while (opcion != 0);

    return 0;
}
