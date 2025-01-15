#include <iostream>
#include <stdlib.h>
using namespace std;

int Abundantes (int num){
    int cont=0,contverificador,suma,valor=2;
    while(cont<num){
        contverificador=1;
        suma=0;
        while(contverificador<valor){
                if(valor % contverificador==0){
                    suma = suma + contverificador;
                }
                contverificador ++;
            } if(suma > valor){
                cout<<"Abundantes: "<<valor<<endl;
                cont ++;
            }
                valor ++;
    }
    return valor;
}
int Decrecientes (int num){
    int cont=0,contverificador,suma,valor=2;
    while(cont<num){
        contverificador=1;
        suma=0;
        while(contverificador<valor){
            if(valor%contverificador==0){
                suma=suma+contverificador;
            }
            contverificador ++;
            } if(suma<valor){
                cout<<"Deficientes: "<<valor<<endl;
                cont ++;
            }
            valor++;
    }
    return valor;
}
int Amigos (int num){
    int cont=0,contverificador,suma,valor=2;
    while(cont<num){
        contverificador=1;
        suma=0;
        while(contverificador<valor){
            if(valor%contverificador==0){
            suma=suma+contverificador;
        }
            contverificador++;
        } if(suma==valor){
            cout<<"Amigos: "<<valor<<endl;
            cont++;
        }
        valor ++;
    }
    return valor;
}
void Numeros (int op){
    int num;
        cout<<"Ingrese el numero de datos:"<<endl;
        cin>>num;
        if(op==1){
            Abundantes(num);
        } else if (op==2){
            Decrecientes(num);
        } else if (op==3){
            Amigos(num);
        }
}


main(){
    int op;
    bool entrar=true;
    while (entrar){
        cout<<"Menu de opciones"<<endl;
        cout<<"1.- Numeros abundantes"<<endl;
        cout<<"2.- Numeros deficientes"<<endl;
        cout<<"3.- Numeros amigos"<<endl;
        cout<<"4.- Salir"<<endl;
        cout<<"Ingresa una opcion"<<endl;
        cin>>op;
        if(op>=1 && op<=3){
            Numeros(op);
        } else if (op==4){
            cout<<"Saliendo del programa."<<endl;
        } else {
            cout<<"Operacion no valida."<<endl;
        }
        if (entrar){
            system ("pause");
            system("cls");
        }
    }    
}

