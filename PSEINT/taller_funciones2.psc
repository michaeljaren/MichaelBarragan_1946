Funcion fac <- factorial ( num )
	definir fac Como Entero
	fac = 1 
	para i=1 hasta num Hacer 
		fac = fac * i
	FinPara
Fin Funcion

Funcion c <- fibonacci( num)
	definir a,b,c,i Como Entero 
	a=0
	b=1
	
	para i = 1 hasta num Hacer
		c= a + b
		a = b
		b = c 
	FinPara
	
	
Fin Funcion

Algoritmo taller_funciones
	definir numer,i como entero
	Definir resultado,suma Como Real
	resultado =0
	suma = 0
	Escribir " Ingrese el numero de la serie para calcular le valor"
	leer numer
	para i = 1 hasta numer Hacer
		resultado = factorial(i)/fibonacci(i)
		suma = suma + resultado
	FinPara
	
	Escribir " EL resultado es = ", suma
FinAlgoritmo
