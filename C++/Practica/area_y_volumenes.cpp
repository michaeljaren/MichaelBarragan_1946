#include <iostream>
#include <cmath>
using namespace std;
main (){
    float base, altura, area, volumen;
    cout << "Ingrese la base del cilindro: ";
    cin >> base;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    if (base > altura ){
        area = 2* M_PI * (base)*(base+altura);
        cout << "El area de su cilindro es = " << area << endl;

    } else {
        volumen = M_PI * pow(base,2)*(altura);
        cout << "El volumen del cilindro es = " << volumen << endl;
    }
}

