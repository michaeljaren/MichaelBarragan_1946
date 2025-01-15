#include <iostream>
using namespace std;
float promedio(float n)
{
    static float suma=0;
    suma = suma + n;
    return suma;}
int main(){
    int i,n;
    float resultado;
    cout<<"Cuantas veces quiere llalmar a la funcion promedio= " ;
    cin >>n;
    for (i=0;i<=n;i++)
    {
        resultado = promedio(i);

    }
    cout << "Resultado: " << resultado<<endl;
    
    
}