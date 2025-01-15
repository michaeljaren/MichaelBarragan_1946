Algoritmo retiro_con_tarjeta
	Definir pin, cantidad Como Entero
	definir transaccion, respuesta como cadena
	Escribir "Ingrese su tarjeta y no la retire hasta el final de la transaccion"
	Escribir "Ingrese su pin de seguridad"
	Leer pin
	transaccion <- "retiro"
	Escribir "Seleccione la transaccion que desea realizar"
	Leer transaccion
	si transaccion = "retiro" entonces Escribir "Seleccione el monto a retirar"
		Escribir "1. $10"
		Escribir "2. $20"
		Escribir "3. $50"
		Escribir "4. $60"
		Escribir "5. $100"
		Escribir "6. $150"
		Escribir "7. $200"
		Escribir "8. Otro monto"
		Leer cantidad
		Segun cantidad Hacer
			1: 
				Escribir "Ha seleccionado $10"
			2:
				Escribir "Ha seleccionado $20"
			3:
				Escribir "Ha seleccionado $50"
			4: 
				Escribir "Ha seleccionado $60"
			5: 
				Escribir "Ha seleccionado $100"
			6:  
				Escribir "Ha seleccionado $150"
			7:
				Escribir "Ha seleccionado $200"
			8:
				Escribir "Ingrese otro valor: "
				Leer cantidad
				Escribir "Ha seleccionado $", cantidad
			De Otro Modo:
				Escribir "Opción inválida"
		FinSegun
		Escribir "¿Desea imprimir su saldo?"
		Leer respuesta
		Escribir "Estamos procesando su transacción..."
		Escribir " Retire su tarjeta para recibir su dinero"
		Escribir "Gracias por su preferencia"
		sino escribir "La transaccion no es un retiro crack"
	FinSi
			
FinAlgoritmo
