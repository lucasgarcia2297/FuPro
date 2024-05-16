Algoritmo Ejercicio_3_9
	Definir com, alum, c Como Entero;	
	Definir nota, prom, acum como real;
	Para c<-1 Hasta 5 Hacer
		alum <- 0;
		acum <-0;
		Escribir "Ingrese notas de alumnos de cada comisión: ";
		Mientras alum <24 Hacer
			Leer nota;
			alum <- alum + 1;
			acum <- nota + acum;
			prom <- acum/24;
		FinMientras
		Escribir "El promedio de esta comisión es: ", prom;
	FinPara
FinAlgoritmo
