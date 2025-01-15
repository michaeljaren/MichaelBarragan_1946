#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<< "Ingrese el valor de a = ";
    cin >> a;
    cout<< "Ingrese el valor de b = ";
    cin >> b;
    cout << " Ingrese el valor de c = ";
    cin>> c;
    if (a>b){
        if (a>c){
            cout << " El  mayor = "<<a<<endl;
        }else {
            cout << "el mayor es = "<<c<<endl;
        }
    } else{
        if(b>c){
            cout << " El mayor es = "<<b<<endl;
        }
        else {
            if (c>a){
                cout << " El mayor es = "<<c<<endl;
            }else {
                cout<<" Son iguales "<<endl;
            }
        }
    }
    
}