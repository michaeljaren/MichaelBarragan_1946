#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<< "Ingrese el valor de a = ";
    cin >> a;
    cout<< "Ingrese el valor de b = ";
    cin >> b;
    cout << " Ingrese el valor de c = ";
    cin>> c;
    if(a > b && a>c){
        cout <<" El mayor es "<<a<<endl;
    } else if (c>a && c>b){
        cout <<" El mayor es "<<c<<endl;
    } else if (b>a && b>c){
        cout <<" EL mayor es "<<b<<endl;
    } else {
        cout << " TODOS SON IGUALES"<<endl;
    }
}