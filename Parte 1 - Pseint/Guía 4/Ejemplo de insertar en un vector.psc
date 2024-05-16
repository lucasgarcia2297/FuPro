Algoritmo Ejemplo_InsertarEnVector
	Dimension v[121]
	para x <- 1 hasta 120 Hacer
		Escribir "ingrese datos: ";
		leer v[x];
	FinPara
	Escribir "ingrese M: ";
	Leer M;
	Para x<- 120 hasta 32 hacer
		v[x+1]<-v[x];
	FinPara
	v[32] <- M;
	Para x<- 1 hasta 121 Hacer
		Escribir v[x];
	FinPara
FinAlgoritmo

