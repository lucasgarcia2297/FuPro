Algoritmo N_Primo
	Repetir
		Escribir "Ingrese un n�mero para saber si es primo: "
		Leer N;
		Mientras N<2 Hacer
			Escribir "�Para saber si un n�mero es primo o no, �ste debe ser mayor que 1!";
	        Leer N;
		FinMientras
	    Para i<-1 Hasta trunc(N/2) Con Paso 1 Hacer
			Resto <- N Mod i;
	    FinPara
	    si Resto=0 Entonces
			Escribir "No es primo";
        Sino
			Escribir "El numero ingresado es un numero primo"
	    FinSi
		Escribir "----------------------------------------------------------------";
    Hasta Que N = 0
	
FinAlgoritmo