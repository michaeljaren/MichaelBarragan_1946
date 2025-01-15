Algoritmo dia_semana
	Definir dia Como Entero
	Escribir " Ingresa dia de la semana"
	leer dia 
	si dia =1 Entonces
		Escribir " Es lunes"
	sino 
		si dia = 2 Entonces
			Escribir " Es martes"
		sino 
			si dia = 3 Entonces
				Escribir  " Es miercoles"
			sino 
				si dia = 4 Entonces
					Escribir " Es jueves"
				Sino 
					si dia = 5 Entonces
						Escribir " Es viernes" 
					sino 
						si dia = 6 o dia = 7 Entonces
							Escribir " Es finde" 
						sino 
							Escribir " Ingresaste un dia no validdo"
						FinSi
						
					FinSi
				FinSi
			FinSi
			
		FinSi
	FinSi
	
FinAlgoritmo
