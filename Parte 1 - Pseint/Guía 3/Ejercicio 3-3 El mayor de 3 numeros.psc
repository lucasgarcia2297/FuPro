Algoritmo Ejercicio_3_3
	Definir N1, N2, N3 como real;
	Escribir "Ingrese un n�mero: ";
	Leer N1;
	Escribir "Ingrese un n�mero: ";
	Leer N2;
	Escribir "Ingrese un n�mero: ";
	Leer N3;
	si N1 > N2 entonces
		si N1 > N3 Entonces
		    Escribir "El n�mero mayor es: ", N1;
	    Sino 
			Escribir "El n�mero mayor es: ", N3;
		FinSi
	Sino
		si N2 > N3 Entonces
			Escribir "El n�mero mayor es: ", N2;
		Sino
			Escribir "El n�mero mayor es: ", N3;		
		FinSi
	FinSi
FinAlgoritmo
