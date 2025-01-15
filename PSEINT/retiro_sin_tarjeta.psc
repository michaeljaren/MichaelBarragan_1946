Algoritmo retiro_sin_tarjeta
    Definir Codigo, Telefono, cantidad Como Entero
    Definir telefonoStr, CodigoStr Como Cadena
    Escribir "Depositos, pagos o transacciones sin tarjeta"

	Escribir "Ingresa el numero de telefono :"
	Leer Telefono
	
    Escribir "Seleccione el monto a retirar:"
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
            Escribir "Has seleccionado $10"
        2:
            Escribir "Has seleccionado $20"
        3:
            Escribir "Has seleccionado $50"
        4: 
            Escribir "Has seleccionado $60"
        5: 
            Escribir "Has seleccionado $100"
        6:  
            Escribir "Has seleccionado $150"
        7:
            Escribir "Has seleccionado $200"
        8:
            Escribir "Ingrese otro valor: "
            Leer cantidad
            Escribir "Has seleccionado $", cantidad
        De Otro Modo:
            Escribir "Opción inválida"
    Fin Segun
        Escribir "Ingrese su código de seguridad:"
        Leer Codigo
    
    Escribir "Estamos procesando su transacción..."
    Escribir " Retire su dinero"
FinAlgoritmo
