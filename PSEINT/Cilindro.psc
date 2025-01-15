Algoritmo Cilindro
	Definir radio, altura, volumen, area Como Real
	Escribir ' Ingrese el valor del radio del cilindro'
	Leer radio
	Escribir ' Ingrese el valor de la altura'
	Leer altura
	Si altura>radio Entonces
		volumen <- (3.1416)*(radio^2)*(altura)
		Escribir ' El volumen del cilindro es = ', volumen
	SiNo
		area <- (2)*(3.1416)*(radio)*(radio+altura)
		Escribir ' El area de este cilindro es = ', area
	FinSi
FinAlgoritmo
