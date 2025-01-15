Algoritmo suma_numeros 
	definir n,d,s, contador Como Entero
	Escribir " Ingresar cuantos datos quieres ingresar"
	leer n
	contador = 0
	s = 0
	mientras contador < n Hacer
		Escribir " Ingrese un numero"
		Leer dato
		contador = contador +1
		s = s+dato
		
	FinMientras
	Escribir " La acumulacion de ",n," = ", s
	
FinAlgoritmo
