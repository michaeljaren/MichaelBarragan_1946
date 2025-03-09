# include <iostream>
# include <cmath>
using namespace std;
int main()
{   
    double radio, altura, volumen, area;
    cout <<" Ingrese un valor para el radio del cilindro ";
    cin >> radio;
    cout <<" Ingrese un valor para la altura del cilindro";
    cin >> altura;
    if (altura > radio){
        volumen = M_PI * pow(radio,2)*(altura);
        cout <<" EL volumen del cilindro es = " <<volumen << endl;
    } else {
        area = 2* M_PI * (radio)*(radio+altura);
        cout << " El area de su cilindro es = " << area << endl;
    }
    return 0; 
}