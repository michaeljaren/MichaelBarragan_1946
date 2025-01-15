#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
main()
{
    bool entrar = true;
    int op;
    while (entrar==true)
    {
        cout <<" Menu de opciones"<<endl;
        cout <<"1. Numeros abundantes"<<endl;
        cout <<"2. Numeros deficientes"<<endl;
        cout << " 3. Numeros Amigos"<<endl;
        cout <<"4. Salir"<<endl;
        cout <<" Ingresa una opcion: ";
        cin >> op;
        switch (op){
            case 1 :
                cout <<"En contruccion";
                break;
            case 2 :
                cout << "Deficiente" ;
                break;
            case 3 : 
                cout <<"Amigo";
                break;
            case 4 :
                entrar= false;
                break;
            default:
            cout << " El valir no es valido ";
        }
        cout <<" Ingrese una tecla para continuar ";
        cin.ignore ();
        getch ();
        system ("cls");
    }
}