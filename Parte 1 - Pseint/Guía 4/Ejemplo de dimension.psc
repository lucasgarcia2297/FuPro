Algoritmo ejemplo_Dimension
	Dimension V[20];
	i<-0;
	Leer N
	Mientras N<>0 hacer
		i<-i+1
		v[i]<-N;
		Leer N
	FinMientras
	Escribir "Ingreso: ", i, " datos";
	
	para i<-1 hasta i Hacer
		Escribir V[i]
	FinPara
	Escribir "Ingrese un valor de indice"
	Leer ValorIndice
	Escribir "El valor es: ", v[ValorIndice]
FinAlgoritmo
