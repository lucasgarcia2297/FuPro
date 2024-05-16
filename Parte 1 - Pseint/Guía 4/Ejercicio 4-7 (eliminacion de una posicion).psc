Algoritmo Ejercicio4_7
	//Inicialización
	Dimension Nombre[60];
	Encontrado <- falso;
	posicion <- 0;	
	N<-4;
	
	//Leer datos
	Para i<-1 hasta N hacer
		Leer Nombre[i];
	FinPara
	i<-1
	//Busqueda
	Mientras Encontrado = Falso Y i<N hacer
		si Nombre[i] = "JUAN LOPEZ" entonces
			Encontrado <- Verdadero;
			Pos <- i;
		FinSi
		i<-i+1;
	FinMientras
	
	//EliminaciÓn
	Si No Encontrado entonces
		Escribir "No fue encontrado"
	Sino
		para i<-pos hasta N-1 hacer       
			Nombre[i]<-Nombre[i+1];   
		FinPara
	FinSi
	
	//Mostrar
	Para i<-1 hasta N-1 Hacer
		Escribir Nombre[i]
	FinPara
FinAlgoritmo
