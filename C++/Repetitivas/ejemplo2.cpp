
#include <iostream>
using namespace std;
int main()
{
    int valor,promedio =0 ,contador =0;
    char op='s';
    bool bandera=false;
    while (!bandera)
    {
        cout << " Deseas ingresar valores <<S>> <<N>>";
        op = getchar();
        if (op=='s'||op=='S'){
            cout << "Ingrese un valor: ";
            cin>> valor;
            contador ++;
            promedio = (promedio) +  (valor);
            
    } else{
        bandera = true;
    }
    cin.ignore();
    
    }
    cout <<" El promedio de datos es "<< ((float)promedio/contador)<<endl;

}
