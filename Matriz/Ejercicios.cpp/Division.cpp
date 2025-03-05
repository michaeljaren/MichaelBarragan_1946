#include <iostream>
using namespace std;
int main(){
    int dividendo, divisor;
    
    // Pedir al usuario que ingrese los valores del dividendo y divisor.
    cout <<"Ingrese el valor de dividendo : " ;
    cin >> dividendo;
    cout <<"Ingrese el valor de divisor : " ;
    cin >> divisor;
    
    // Mostrar el cociente de la división. (Realiza la operacion )
    cout << " El cociente de la division es: " << dividendo / divisor << endl;
    cout <<" El residual de la division es: " << dividendo % divisor << endl;
    return 0;
}

// Este codigo calcula el cociente y el residuo de una division entera.