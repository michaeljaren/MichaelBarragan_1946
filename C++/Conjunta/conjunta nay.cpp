#include <iostream>
using namespace std;
main()
{
    int numerador=2;
    int denominador=1;
    int serie;
    int contador= 0;
    cout<< "ingresar nume serie";
    cin>> serie ;

    double x= 0;
    double den = 1;;

     cout << "La serie es:\n ";
     while (contador <= serie)
        {
            if (contador>1)
          {
            if (contador % 2 ==0)

     {
 cout<<"-";
    }
    else
    {
cout<<"+";
}
}
cout << numerador <<"/"<< denominador;

if (contador % 2 == 0)
{
x-=(numerador/den);
}
else
{
x+= (numerador/den);
}
numerador= numerador+den;
den += 2;

contador++;
}
cout<< endl;

cout <<"El valor de la serie de x es:\n" << x <<endl;
}