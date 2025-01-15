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
		c = c 
	FinPara
	
	
Fin Funcion

Algoritmo taller_funciones
	definir numer como entero
	Definir resultado Como Real
	Escribir " Ingrese el numero de la serie para calcular le valor"
	leer numer
	resultado = factorial(numer)/fibonacci(numer)
	Escribir " EL resultado es = ", resultado	
FinAlgoritmo
