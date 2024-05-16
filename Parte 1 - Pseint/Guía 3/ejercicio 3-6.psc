//Ejercicio 3-6 de la guìa 3 de fundamentos de programación
//*Resuelva el siguiente problema empleando la estructura iterativa
//     Mientras-Hacer. Emplee pseudocódigo y diagrama de flujo.
//Problema: En un curso de cierta universidad se desea determinar 
// cuántos estudiantes varones superan la altura 1.90 m y cuantas 
//                      mujeres superan 1.75m.
//          Se leen como datos el sexo y la altura de los 
//                   112 integrantes del curso.

Algoritmo Ejercicio_3_6
	Definir c como entero;
	Definir alt, var, muj, sam, sav como real;
	Definir sexo, m, f como caracter;
	c <- 0;
	var <- 0;
	muj <- 0;
	sam <- 0;
	sav <- 0;
	Mientras c<12 Hacer
		c <- c +1;
		Escribir "Sexo: varon(presione m), mujer(presione f): ";
		Leer sexo;
		si sexo = 'm' entonces
			var <- var+1;
			Escribir "Altura(en metros): ";
			Leer alt;
			si alt>1.90 Entonces
				sav <- sav+1;
			FinSi
		Sino
			si sexo = 'f' Entonces
			muj <- muj+1;
		    Escribir "Altura(en metros): ";
			Leer alt;
			si alt>1.75 Entonces
				sam <- sam+1;
			finsi
			finSi
		FinSi
		 
	FinMientras
	Escribir "Hay ",sav," varones que superan la altura de 1.90m";
	Escribir "y hay ", sam," mujeres que superan la altura de 1.75m";
	
FinAlgoritmo