#include <iostream>
#include <vector>
using namespace std;

// Función para calcular el MCD usando el Algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función para listar los números primos en un rango dado
vector<int> primosEnRango(int inicio, int fin) {
    vector<int> primos;
    for (int i = inicio; i <= fin; ++i) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }
    return primos;
}

int main() {
    int a, b, inicio, fin;
    
    // MCD
    cout << "Ingrese dos numeros para calcular el MCD:\n";
    cout << "Numero 1: ";
    cin >> a;
    cout << "Numero 2: ";
    cin >> b;
    cout << "El MCD de " << a << " y " << b << " es: " << calcularMCD(a, b) << endl;

    // Primos en un rango
    cout << "\nIngrese el rango para encontrar numeros primos:\n";
    cout << "Inicio: ";
    cin >> inicio;
    cout << "Fin: ";
    cin >> fin;

    vector<int> primos = primosEnRango(inicio, fin);
    cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
