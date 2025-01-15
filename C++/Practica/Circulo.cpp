 #include <iostream>
#include <cmath>
using namespace std;
main (){
    int r,d,area,diametro;
    cout << "Escibir el radio";
    cin >> r;
    cout << "Escribir el diametro";
    cin >> d;
    if (r>d){
        area = M_PI*pow(r,2);
        cout << "El area del ciruclo es"<<area<<endl;
        cin >> area;
    } else {
        diametro = M_PI*d;
        cout << "El a del diametro del ciruclo es"<<diametro<<endl;
        cin >> diametro; 
m_
    }

return 0;


}