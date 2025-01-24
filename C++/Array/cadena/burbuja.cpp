#include <iostream>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        v[i]=rand()%20+1;
        cin>>v[i];
    }
}

int ordenarBurbuja(int v[], int n)
{
    int aux,contador=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n-1; j++)
        {
            contador++;
            if (v[j]<v[j+1])
            {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }

        }
    }
    return contador;
}

void muestraVector (int v[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}

main()
{
    int ne;
    cout<<"Numeros de elementos: ";
    cin>>ne;
    int vec[ne];
    llenaVector(vec,ne);
    cout<<"Vector original: ";
    muestraVector(vec,ne);
    cout<<endl;
    cout<<"El numero de comparaciones burbuja v1= "<<ordenarBurbuja(vec,ne);
    cout<<"\nVector ordenado: "<<endl;
    muestraVector(vec,ne);
    

}