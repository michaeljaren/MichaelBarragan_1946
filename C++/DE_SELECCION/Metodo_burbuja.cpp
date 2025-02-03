
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
int ordenarBurbujav1(int v[], int n){
    int aux, contador= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
            if( v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    return contador;
}
int ordenarBurbujav2(int v[], int n){
    int mejora=1;
    int aux, contador= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-mejora;j++){
            contador++;
            if( v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        mejora++;
    }
    return contador;
}
int ordenarBurbujav3(int v[], int n){
    int mejora=1;
    bool cambio = true;
    int aux, contador= 0;
    for(int i=0;i<n  && cambio;i++){
        cambio = false;
        for(int j=0;j<n-mejora;j++){
            contador++;
            if( v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}
void mostrarVector(int v[], int n){
    for(int i=0; i<n;i++){
        cout << v[i]<<" ";
    }
    
}
int mejorOpcion(int a, int b, int c){
    if (a<b && a<c)
        return a;
        if (b<c && b<a)
            return b;
            else
                return c;
    }
main(){
    int ne,a,b,c;
    cout << "Numero de elementos: ";
    cin>>ne;
    int vec[ne];
    llenarVector(vec,ne);
    cout<<"Vector original: ";
    mostrarVector(vec,ne);
    cout<<endl;
    a= ordenarBurbujav1(vec,ne);
    b= ordenarBurbujav2(vec,ne);
    c= ordenarBurbujav3(vec,ne);
    cout << "La mejor opcion es la que compara: "<<mejorOpcion(a,b,c)<<" veces"<<endl;
    cout << "El # de comparaciones burbuja v1: "<<ordenarBurbujav1(vec,ne)<<endl;
    cout << "El # de comparaciones burbuja v2: "<<ordenarBurbujav2(vec,ne)<<endl;
    cout << "El # de comparaciones burbuja v3: "<<ordenarBurbujav3(vec,ne)<<endl;
    cout<< "Vector ordenado: "<<endl;
    mostrarVector(vec,ne);
}