Algoritmo Ejercicio_3_14
	Definir fact, N, acum Como entero;
	Escribir "Ingrese número: ";
	Leer N;
	acum <- 1;
	Para fact<- 1 Hasta N Con Paso 1 Hacer
		acum <- acum*fact;
	FinPara
	Escribir "El factorial de ",N, " es: ", acum;
FinAlgoritmo
 