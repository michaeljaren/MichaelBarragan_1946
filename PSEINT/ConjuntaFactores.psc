Algoritmo Factores
	Definir numero, n1, factor Como Entero
	factor <- 1
	Escribir 'Ingrese el numero para indicar sus factores :'
	Leer numero
	Para n1<-1 Hasta numero-1 Hacer
		Si numero MOD n1=0 Entonces
			Escribir 'El factor divisible para este numero son:', n1
			factor <- factor+1
		FinSi
	FinPara
	Escribir 'El número total de factores divisibles son:', factor
FinAlgoritmo
