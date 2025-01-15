#include <iostream>
using namespace std;
main()
{
    bool entrar = true;
    int op,cantNumero, contador,nverificador,contverificador,suma;
    while (entrar==true)
    {
        cout <<" Menu de opciones"<<endl;
        cout <<"1. Numeros abundantes"<<endl;
        cout <<"2. Numeros deficientes"<<endl;
        cout << " 3. Numeros Amigos"<<endl;
        cout <<"4. Salir"<<endl;
        cout <<" Ingresa una opcion: ";
        cin >> op;
        if (op >0 && op <4 ){
            cout << " Ingrese la cantidad de numeros = ";
            cin >> cantNumero;
            contador = 0;
            nverificador = 2;
        }
        switch (op){
            case 1 :
                while ( contador < cantNumero){
                    contverificador = 1;
                    suma= 0;
                    while (contverificador < nverificador)
                    {
                        if ( nverificador % contverificador== 0){
                        suma = suma+contverificador;
                        }
                        contverificador++;
                        }
                    if (suma >nverificador){
                        cout<<"Abundante : "<<nverificador<<endl;
                        contador ++;
                    }
                    nverificador++;
                }
                
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
        system ("pause");
        system ("cls");
        
    }
}