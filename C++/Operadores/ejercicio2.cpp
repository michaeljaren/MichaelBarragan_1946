#include <iostream>
using namespace std;

int main()
{
    int n1, n2, resultado; 
    bool operacion;    

    cout << "Ingrese el primer valor: "; 
    cin >> n1;

    cout << "Ingrese el segundo valor: ";
    cin >> n2;

    cout << "Primera forma:" << endl;
    (n1 > n2) ? cout << n1 << " es mayor que " << n2 : cout << n2 << " es mayor que " << n1;
    cout << endl;

    cout << "2da Forma:" << endl;
    resultado = (n1 > n2) ? n1 / n2 : n1 % n2; 
    operacion = (n1 > n2);                    

    if (operacion)
        cout << "El resultado guarda la división de " << n1 << " entre " << n2 << endl;
    else
        cout << "El resultado guarda el módulo de " << n1 << " entre " << n2 << endl;

    return 0;
}
