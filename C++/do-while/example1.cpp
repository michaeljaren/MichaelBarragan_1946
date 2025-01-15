#include <iostream>
using namespace std;
main(){
    int num=1,valor;
    do
    {
        cout << num <<" ";
        num++;
    } while ( num <=10 );

    //validar para ingresar valores entre 1 y10 
    do
    {
        cout<<"Ingresa un valor = ";
        cin >>valor;
        (valor <10 || valor > 20)? cout <<"Valor no valido entre 10 y 20 ": cout <<"ERROR 404"<<endl;
    } while ( valor <10 || valor > 20 );
    
    cout <<" Ingresaste el valor de : "<<valor<<endl;
}