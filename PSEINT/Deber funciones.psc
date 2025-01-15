Proceso Deber
	
    Repetir
        Escribir "Ingrese el numero de la secuencia (del 1 -10):"
        Leer limite
        Si limite < 1 o limite > 10 Entonces
            Escribir "Error el numero escrito no esta en el rango"
        Fin Si
    Hasta Que limite >= 1 y limite <= 10
	
    Dimension serieFibonacci[limite]
    Dimension serieFactorial[limite]
    Generar_SerieFibonacci(limite, serieFibonacci)
    Generar_SerieFactorial(limite, serieFactorial)
	
    Escribir "Secuencia :"
    Para i = 1 Hasta limite Hacer
        Escribir serieFibonacci[i]
    Fin Para
	
    Escribir "Secuencia de Factorial:"
    Para i = 1 Hasta limite Hacer
        Escribir serieFactorial[i]
    Fin Para
	
    sumaTotal <- 0
    Para i = 1 Hasta limite Hacer
        Si serieFibonacci[i] <> 0 Entonces
            sumaTotal <- sumaTotal + (serieFactorial[i] / serieFibonacci[i])
        SiNo
            Escribir "Error[", i, "]"
        Fin Si
    Fin Para
	
    Escribir "La suma de la secuencia es : ", sumaTotal
Fin Proceso

Subproceso Generar_SerieFibonacci(limite, serieFibonacci)
    serieFibonacci[1] = 1
    Si limite >= 2 Entonces
        serieFibonacci[2] = 1
    Fin Si
	
    Para i = 3 Hasta limite Hacer
        serieFibonacci[i] = serieFibonacci[i-1] + serieFibonacci[i-2]
    Fin Para
Fin Subproceso

Subproceso Generar_SerieFactorial(limite, serieFactorial)
    Para i = 1 Hasta limite Hacer
        serieFactorial[i] <- 1
        Para j = 1 Hasta i Hacer
            serieFactorial[i] <- serieFactorial[i] * j
        Fin Para
    Fin Para
Fin Subproceso
