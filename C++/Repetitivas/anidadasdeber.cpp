#include <iostream>
using namespace std;

main()
{
    bool entrar = true;
    int op, cantNumero, contador, nverificador;

    while (entrar)
    {
        cout << "Menu de opciones" << endl;
        cout << "1. Numeros abundantes" << endl;
        cout << "2. Numeros deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> op;

        if (op >= 1 && op <= 3)
        {
            cout << "Ingrese la cantidad de numeros = ";
            cin >> cantNumero;
            contador = 0;
            nverificador = 2; 
        }

        switch (op)
        {
        case 1: 
            while (contador < cantNumero)
            {
                int suma = 0;
                for (int contverificador = 1; contverificador < nverificador; contverificador++)
                {
                    if (nverificador % contverificador == 0)
                    {
                        suma += contverificador;
                    }
                }
                if (suma > nverificador)
                {
                    cout << "Abundante: " << nverificador << endl;
                    contador++;
                }
                nverificador++;
            }
            break;

        case 2: 
            while (contador < cantNumero)
            {
                int suma = 0;
                for (int contverificador = 1; contverificador < nverificador; contverificador++)
                {
                    if (nverificador % contverificador == 0)
                    {
                        suma += contverificador;
                    }
                }
                if (suma < nverificador)
                {
                    cout << "Deficiente: " << nverificador << endl;
                    contador++;
                }
                nverificador++;
            }
            break;

        case 3:
            while (contador < cantNumero)
            {
                int sum1 = 0;
                for (int i = 1; i < nverificador; i++)
                {
                    if (nverificador % i == 0)
                    {
                        sum1 += i;
                    }
                }
                int sum2 = 0;
                for (int j = 1; j < sum1; j++)
                {
                    if (sum1 % j == 0)
                    {
                        sum2 += j;
                    }
                }
                if (sum2 == nverificador && nverificador < sum1)
                {
                    cout << "Amigos: " << nverificador << " y " << sum1 << endl;
                    contador++;
                }

                nverificador++;
            }
            break;

        case 4:
            entrar = false;
            break;

        default:
            cout << "El valor no es valido" << endl;
        }

        system("pause");
        system("cls");
    }

}
