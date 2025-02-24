#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(10); // Se inicializa con 10 elementos

    // Llenado del vector
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    // Mostrar los elementos del vector
    cout << "Elementos del vector: ";
    for (auto x : numeros) {
        cout << x << " ";
    }
    cout << endl;

    // Mostrar el tamaño del vector
    cout << "Tamano del vector: " << numeros.size() << endl;
    numeros.erase(numeros.begin()+3, numeros.begin()+6); // Borrar elementos del vector
    for (auto x : numeros) {
        cout << x << " ";
        
    }
    cout<<"\n El tamano del vector es : " << numeros.size() << endl;
    return 0;
}
