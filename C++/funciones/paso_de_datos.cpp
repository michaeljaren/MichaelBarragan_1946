#include <iostream>
using namespace std;
float suma (float a, float b) { return a + b; }
float resta (float a, float b) { return a - b; }
float multiplicacion (float a, float b) { return a * b; }
float division (float a, float b) { return a / b; }
int residupo (int a, int b) { return a % b; }
int main() {
    float a, b;
    cout << "ingrese el primer numero: ";
    cin >> a;
    cout<< "Ingrese el segundo numero: ";
    cin>>b;
    cout << "Suma: " << suma(a, b) << endl;
    cout << "Resta: " << resta(a, b) << endl;
    cout << "Multiplicacion: " << multiplicacion(a, b) << endl;
    cout << "Division: " << division(a, b) << endl;
    cout << "Residuo: " << residupo(a, b) << endl;
    return 0;
}