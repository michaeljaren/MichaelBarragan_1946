#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char operador;
    
    cout << "Ingrese dato 1: ";
    cin >> n1;
    
    cout << "Ingrese dato 2: ";
    cin >> n2;  // Falta el punto y coma

    cout << "Que operacion va a realizar (+, -, *, /): ";
    cin >> operador;  // Aquí se lee el operador
    
    switch (operador) {
        case '+':
            cout << "La suma de " << n1 << " con " << n2 << " = " << (n1 + n2) << endl;
            break;
        case '-':
            cout << "La resta de " << n1 << " con " << n2 << " = " << (n1 - n2) << endl;
            break;
        case '*':
            cout << "El producto de " << n1 << " con " << n2 << " = " << (n1 * n2) << endl;
            break;
        case '/':
            if (n2 == 0) {
                cout << "No existe división para cero" << endl;
            } else {
                cout << "La división de " << n1 << " entre " << n2 << " = " << (n1 / n2) << endl;
            }
            break;
        default:
            cout << "OPERADOR NO VÁLIDO: " << operador << endl;
            break;
    }

    return 0;
}
