Algoritmo Ejercicio_3_7
	Definir c, var, sam, sav, muj como entero;
	Definir alt  como real;
	Definir sexo, m, f como caracter;
	c <- 0;
	var <- 0;
	muj <- 0;
	sam <- 0;
	sav <- 0;
	Escribir "Altura(en metros): ";
	Leer alt;
	Mientras alt<>0 Hacer
		c <- c +1;
		Escribir "Sexo: varon(presione m), mujer(presione f): ";
		Leer sexo;
		si sexo = 'm' entonces
			var <- var+1;
			si alt>1.90 Entonces
				sav <- sav+1;
			FinSi
		Sino
			si sexo = 'f' Entonces
				muj <- muj+1;
				si alt>1.75 Entonces
					sam <- sam+1;
				finsi
			finSi
		FinSi
		Escribir "Altura(en metros): ";
		Leer alt;
	FinMientras
	si sav <>1 Entonces
		Escribir Sin Saltar "Hay ",sav," varones que superan la altura de 1.90m";
    Sino
		Escribir sin saltar "Hay ",sav, " varón que supera la altura de 1.90m";
	finSi
	si sam <> 1 Entonces
		Escribir " y hay ",sam," mujeres que superan la altura de 1.75m";
	Sino
		Escribir " y hay ",sam," mujer que supera la altura de 1.75m";
	FinSi
FinAlgoritmo
