Algoritmo CambioDeFoco
	Definir respuesta Como caracter
	
	Escribir "~Proceso para Cambiar un Foco"
	
	Repetir
		Escribir "¿Hay foco de repuesto en casa? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
	Si respuesta es "No" Entonces 
		Escribir "~Ir a comprar un foco"
	FinSi
	
	Repetir
		Escribir "¿El foco está apagado? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
    Si respuesta es "No" Entonces
        Escribir "~Por favor desconectar la energia electrica."
	FinSi
	
    Repetir
		Escribir "¿Se puede alcanzar el foco sin esfuerzo? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
    Si respuesta es "No" Entonces
        Escribir "~Utiliza una escalera segura para alcanzar el foco."
	FinSi
	
    Escribir "~Para sacar el foco actual, girar en sentido antihorario hasta que salga por completo."
	Escribir "~Recuerda hacerlo con cuidado para no dañar la boquilla."
	
	Repetir
		Escribir "¿Salió el foco? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
    Si respuesta es "No" Entonces
        Escribir "~Intentar girar el foco nuevamente o usa un poco de fuerza, cuidando de no dañar la boquilla."
	FinSi
	
    Escribir "~Toma el nuevo foco con cuidado."
	Escribir "~Comprobar si encaja."
	
	Repetir
		Escribir "¿El nuevo foco encaja en la boquilla? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
    Si respuesta es "No" Entonces
        Escribir "En caso que no encaje, por favor consigue un foco del tamaño correcto."
	Finsi
    
    Escribir "~Una vez conseguido el foco adecuado, colocar el nuevo foco en la boquilla."
    Escribir "~Girar en sentido horario hasta que ajuste."
	
	Repetir
		Escribir "¿El foco está bien colocado? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
    Si respuesta es "No" Entonces
        Escribir "~Gira un poco más hasta que se ajuste perfectamente."
	Finsi
    
    Escribir "~Enciende el interruptor para comprobar que el foco funcione."
	
	Repetir
		Escribir "¿El foco está encendido? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
    Si respuesta es "No" Entonces
        Escribir "~Verifica que el foco esté correctamente instalado o intenta con otro foco."
		Escribir "~Comprobar si la boquilla está en buenas condiciones."
	Finsi
	
	Repetir
		Escribir "¿La boquilla está funcionando correctamente? (Si/No)"
		Leer respuesta
	Hasta Que respuesta = "Si" O respuesta = "No"
	
	Si respuesta es "No" Entonces
		Escribir "~Comprar una nueva boquilla e intercambiarla por la actual."
		Escribir "~El foco ha sido cambiado con exito."
	SiNo
		Escribir "~El foco ha sido cambiado con exito."
	FinSi
	
FinAlgoritmo
