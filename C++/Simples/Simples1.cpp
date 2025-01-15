#include <iostream>
#include<stdio.h>

using namespace std;
main(){
    int num, M, div;
    cout    <<"Ingrese un numero cualquiera:";
    cin >> num; 
    cout <<"Ingrese el numero divisor:";
    cin >> div;
    M= num % div;
    if ((M == 0))
    {
        cout   <<"El numero es divisible por"  <<div   <<endl;
        printf ("El nuemero %d es divisible %d \n", num, div );
    }
    
    if (M== 1)
    {
        cout    <<"Los numeros ingresados no son divisibles" <<"Esta mal"  <<endl;
    }
       num= 0;
       num= 1; 
}

