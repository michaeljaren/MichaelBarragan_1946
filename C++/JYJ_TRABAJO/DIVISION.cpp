//1.2 DIVISION
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b,q,r;  //q es cociente y r es residuo
    cout << "Ingrese el dividendo: ";
    cin >> a;
    cout << "Ingrese el divisor: ";
    cin >> b;
    if ( b>0 ){
        q=a/b;
        r=a%b;
        cout << a << " = " << b << " * "<< q << " + " << r << endl;
        cout << "El cociente de " << q << endl;
        cout << "El residuo de " << r << endl;
        
        
    } else {
        cout << "Error: el divisor no puede ser negativo." << endl;
    }

}
