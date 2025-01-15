#include <iostream> 
#include <cmath>

using namespace std;
main()
{
    double radio, altura, area, volumen;

    cout << "Escribe el radio:"; 
    cin>> radio;

    cout << "Escribe el altura:"; 
    cin>> altura;

    if (altura>radio) {
        volumen= M_PI * pow (radio,2) * (altura);
        cout<< "El volumen es" <<volumen<<endl;

    } else {
        area= 2*M_PI*radio*(radio+altura);
        cout<<"El area es"<<area<<endl;
    }
    return 0;
}
