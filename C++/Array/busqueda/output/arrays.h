#include <stdlib.h>
#include <iostream>
#include <time.h>
namespace vectorn{
    void llenar(int v[], int n,int ri=0, int rs=10) {
        int i;
        for(i=0;i<n;i++){
            v[i]=rand()%(rs-ri+1)+ri; 
            //v[i]= ri + rand()%(rs+1 - ri);
            //variable = limite inferior + rand()% (limite superior +1 - limite inferor);
            
            std::cout << v[i] << " ";
        }

    }
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

void verDatos(int v[], int n){
    for(int i=0;i<n;i++){
        std::cout << v[i] << " ";
    }
    
}