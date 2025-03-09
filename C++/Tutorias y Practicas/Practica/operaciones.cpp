#include <iostream>
using namespace std;
main(){
    float n1,n2,suma,resta;
    cout << " Ingrese el valor de n1 ";
    cin>> n1;
    cout <<"Ingrese el valor de n2 ";
    cin>>n2;
    if(n1>n2){
        suma= n1+n2;
        cout<< " El valor de su suma es = "<<suma<<endl;
    } else{
        resta= n2-n1;
        cout << " El valor de su resta es = "<<resta<<endl;
    }
    return 0;
}