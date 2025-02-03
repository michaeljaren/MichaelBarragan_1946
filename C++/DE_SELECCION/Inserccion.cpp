#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenarVector(int v[], int n){
    srand(time(NULL));
    for (int i= 0;i<n;i++){
        //v[i]=rand()%20+1;
        cin >> v[i];
        }
  
    }
int ordenarInsercion(int v[], int n){
    int contar=0, j, aux;
    for(int i=1;i<n;i++){
        aux = v[i];
        j= i-1;
        while(j>=0){
            contar++;
            if(aux<v[j]){
                v[j+1]=v[j];
                v[j]=aux;
            }
            j--;
        }
        
    }
    return contar;
}
void mostrarVector(int v[], int n){
    for(int i=0; i<n;i++){
        cout << v[i]<<" ";
    }
}
main(){
    int ne, comparaciones;
    cout <<"Ingrese el numero de elementos: ";
    cin>>ne;
    int vector[ne];
    llenarVector(vector,ne);
    cout << "Vector original: \n";
        mostrarVector(vector, ne);
    comparaciones = ordenarInsercion(vector, ne);
    cout<< "\nVector ordenado:\n";
    mostrarVector(vector, ne);
    cout << "\nEl nro de comparaciones = "<<comparaciones;
}