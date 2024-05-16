Algoritmo Ejercicio4_12
	
	Dimension M[3,6];
	//
	Para i <- 1 hasta 3 Hacer
		Para j<- 1 hasta 6 Hacer
			M[i,j] <-0;
		FinPara
	FinPara
	Leer Nro_Arq;
	Mientras Nro_Arq<>0 Hacer
		Leer tipo;
		Leer m2;
		m[tipo,Nro_Arq] <- m[tipo,Nro_Arq] + m2;
		Leer Nro_Arq;
	FinMientras
	
	Total<-0
	Para i<-1 hasta 3 Hacer
		
		Para a<-1 hasta 6 Hacer
			Escribir Sin Saltar m[i,j], " ";
			Total<- Total+  M[i,j];
		FinPara
		Escribir "";
	FinPara
FinAlgoritmo
