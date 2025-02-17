#include <iostream>
#include "strings.h"
using namespace std;
main() {
    string palabras;
    cout << "Ingrese una cadena: ";
    getline(cin, palabras);
    reemplazar(palabras);
    cout<<"La cadena final es : "<< palabras << endl;
    return 0;

}