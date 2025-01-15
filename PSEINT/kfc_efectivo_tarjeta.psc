Algoritmo kfc_efectivo
	Definir seleccionPollo, continuacionCompra Como Cadena
	Definir precio Como Real
	Definir formaDeConsumo, categoria, combo, opcionSeleccionada, saborBebida, complemento, finalizacion, metodoPago Como Entero
	Escribir '*****************Bienvenido a KFC*****************'
	Escribir ' ¿Con hambre? Ordena aqui'
	Escribir ' Cómo desea su pedido'
	Escribir '1. Para comer aqui'
	Escribir '2. Para llevar'
	Leer formaDeConsumo
	Escribir '******************Menu******************'
	Escribir 'Seleccione categoria'
	Escribir '1. Combos'
	Escribir '2. Sanduches y twisters'
	Escribir '3. Helados'
	Escribir '4. Boxes'
	Escribir '5. Festines'
	Escribir '6. Bebidas'
	Leer categoria
	Segun categoria Hacer
		1:
			Escribir '1. Super combo 1'
			Escribir '2. Super combo 2'
			Escribir '3. Super combo 3'
			Escribir '4. Combo ideal'
			Leer opcionSeleccionada
			Escribir 'Seleccione Natural o Crispy'
			Leer seleccionPollo
			Escribir 'Sabor de su bebida'
			Escribir '17. Pepsi'
			Escribir '18. Tropical'
			Escribir '19. Seven up'
			Escribir '20. Agua'
			Leer opcionSeleccionada
		2:
			Escribir '5. Twister'
			Escribir '6. Kentucky Crispy BBQ'
			Escribir '7. Kentucky Sadwich'
			Leer opcionSeleccionada
			Escribir 'Sabor de su bebida'
			Escribir '17. Pepsi'
			Escribir '18. Tropical'
			Escribir '19. Seven up'
			Escribir '20. Agua'
			Leer opcionSeleccionada
		3:
			Escribir '8. Avalancha oreo'
			Escribir '9. Avalancha manjar'
			Escribir '10. Sundae mora'
			Escribir '11. Sundae manjar'
			Leer opcionSeleccionada
		4:
			Escribir '12. Big box recargado'
			Escribir '13. Big box gamer'
			Escribir '14. Big box kentucky'
			Leer opcionSeleccionada
			Escribir 'Seleccione Natural o Crispy'
			Leer seleccionPollo
			Escribir 'Sabor de su bebida'
			Escribir '17. Pepsi'
			Escribir '18. Tropical'
			Escribir '19. Seven up'
			Escribir '20. Agua'
			Leer opcionSeleccionada
		5:
			Escribir '15. Festin 7 Presas'
			Escribir '16. Festin 9 Presas'
			Leer opcionSeleccionada
			Escribir 'Seleccione Natural o Crispy'
			Leer seleccionPollo
			Escribir 'Sabor de su bebida'
			Escribir '17. Pepsi'
			Escribir '18. Tropical'
			Escribir '19. Seven up'
			Escribir '20. Agua'
			Leer opcionSeleccionada
		6:
			Escribir '17. Pepsi'
			Escribir '18. Tropical'
			Escribir '19. Seven up'
			Escribir '20. Agua'
			Leer opcionSeleccionada
		De Otro Modo:
			Escribir 'Opcion no valida'
	FinSegun
	Escribir 'Seleccione un complemento para la orden'
	Escribir '1. Papas medianas'
	Escribir '2. Papas grandes'
	Escribir '3. Agrandar bebida'
	Escribir '4. Alitas picantse'
	Escribir '5. No gracias'
	Leer complemento
	Escribir ' Agregar y continuar comprando o Ir a pagar'
	Escribir '1. Agregar y continuar comprando'
	Escribir '2. Ir a pagar'
	Leer finalizacion
	Si finalizacion=1 Entonces
		Escribir 'Repita el procedimiento'
	SiNo
		Si finalizacion=2 Entonces
			Escribir 'Seleccione su metodo de pago'
			Escribir '1. Efectivo'
			Escribir '2. Tarjeta'
			Leer metodoPago
			Si metodoPago=1 Entonces
				Escribir 'Estamos procesando tu pedido'
				Escribir 'Acerquese a caja a pagar'
			SiNo
				Si metodoPago=2 Entonces
					Escribir 'Acerque su tarjeta al datafast'
					Escribir 'Estamos procesando tu pedido'
					Escribir 'Espera a que tu orden este lista'
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
