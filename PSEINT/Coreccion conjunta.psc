Algoritmo Factores
	Definir numero, n1, factor Como Entero
	factor <- 0
	n1 <- 1
	Escribir 'Ingrese el numero para indicar sus factores:'
	Leer numero
	Mientras n1 <= numero - 1 Hacer
		Si numero MOD n1 = 0 Entonces
			Escribir 'El factor divisible para este numero es:', n1
			factor <- factor + 1
		Fin Si
		n1 <- n1 + 1
	Fin Mientras
	
	Escribir 'El número total de factores divisibles es:', factor
FinAlgoritmo