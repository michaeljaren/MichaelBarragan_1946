#include <iostream>
using namespace std;
main(){
    int numero;
    bool s;
    cout<<"Ingrese el numero = ";
    cin>>numero;
    if(numero !=0){
        s=true;
    } else{
        s=false;
    }
    if(s){
        cout<<"S es verdadero "<<endl;

    }else{
        cout<<" S es falso" <<endl;
    }
    return 0;

}