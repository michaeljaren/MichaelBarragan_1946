#include <iostream>
using namespace std;
main(){
    float articulos_totales;
    int art1,art2,art3,art4;
    float pre1=1.99, pre2=10.45, pre3=2.40, pre4=4.99;
    cout<<"Ingrese la cantidad que desea del Articulo 1 $1.99  ";
    cin>>art1;
    cout<<"Ingrese la cantidad que desea del Articulo 2 $10.45  ";
    cin>>art2;
    cout<<"Ingrese la cantidad que desea del Articulo 3 $2.40  ";
    cin>>art3;
    cout<<"Ingrese la cantidad que desea del Articulo 4 $4.99  ";
    cin>>art4;
    articulos_totales= art1+art2+art3+art4;
    if(articulos_totales>10){
    articulos_totales= ((art1*pre1)+(art2*pre2)+(art3*pre3)+(art4*pre4))-((art1*pre1)+(art2*pre2)+(art3*pre3)+(art4*pre4))*0.10;
    cout <<" El precio de sus articulos con el descuento es $"<<articulos_totales<<endl;
    }else{
        articulos_totales= ((art1*pre1)+(art2*pre2)+(art3*pre3)+(art4*pre4));
    cout <<" El precio de sus articulos es $"<<articulos_totales<<endl;
    }
    return 0;

}