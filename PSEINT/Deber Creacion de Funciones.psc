Funcion Fibonacci(k)
    Definir num1, num2, suma Como Entero
    num1 = 1
    num2 = 1
    Si k = 1 Entonces
        num2 = 1
    FinSi
    Para i = 1 Hasta k Hacer
        suma = num1 + num2
        num1 = num2
        num2 = suma
    FinPara
    Escribir num1
FinFuncion

Funcion factorial(k)
    Definir j, fact Como Entero
    fact = 1
    Para j = 1 Hasta k Hacer
        fact = fact * j
    FinPara
    Escribir fact  
FinFuncion

Algoritmo fibonacci_factorial
    Definir k,num1,num2,num3,i,j,suma,contador, Fibonacci_k, factorial_k, resultado, respuestafinal Como Real
    respuestafinal= 0
    Escribir "Ingresa cualquier numero para los terminos de la serie de Fibonacci y el factorial, por favor"
    Leer contador
    Para k = 1 Hasta contador Hacer
        Fibonacci_k = 0
        num1 = 1
        num2 = 1
        Para i = 1 Hasta k Hacer
            suma = num1 + num2
            num1 = num2
            num2 = suma
        FinPara
        Fibonacci_k = num1
        factorial_k = 1
        Para j = 1 Hasta k Hacer
            factorial_k = factorial_k * j
        FinPara
        Si Fibonacci_k <> 0 Entonces  
            Escribir "El termino ", k, " de la serie es: ", factorial_k, "/", Fibonacci_k
            resultado = factorial_k / Fibonacci_k
			respuestafinal=respuestafinal + resultado
        FinSi
    FinPara
    Escribir "La suma de todos los terminos en tu serie  es : ", respuestafinal
FinAlgoritmo