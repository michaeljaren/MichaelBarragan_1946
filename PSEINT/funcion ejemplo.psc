Funcion resultado <- matematica ( num1, num2 )
    definir resultado Como Entero
    si num2 <> 0 Entonces
        resultado = num1 mod num2
        Escribir "Error: el divisor no puede ser cero."
        resultado = 0
    FinSi
Fin Funcion

Funcion num <- ingresaNumero
    definir num Como Entero
    Escribir "Ingresa un numero: "
    Leer num
Fin Funcion

Algoritmo operaciones
    definir n1, n2 Como Entero
    Definir sal Como Logico
    sal = Verdadero
    mientras sal hacer
        n1 = ingresaNumero()
        n2 = ingresaNumero()
        si n2 = 0 Entonces
            Escribir "Error: el divisor no puede ser cero. Intenta nuevamente."
            Escribir "El módulo es igual a ", matematica(n1, n2)
        FinSi
        Leer sal
    FinMientras
    Escribir "Saliendo del programa"
FinAlgoritmo
