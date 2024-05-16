Algoritmo Ejercicio4_9
	//Inicializacion
	Dimension M[10, 10], V[45];
	
	////Mostrar Lista de valores
	Escribir "Matriz"
	Para f<-1 hasta 10 Hacer
		Para c<-1 hasta 10 Hacer
			M[f,c]<-azar (10);
			Escribir Sin Saltar M[f,c], " ";
		FinPara
		Escribir "";
	FinPara
	
	//Mostrar el Vector formado
	x<-1
	Escribir "  "
	Escribir "El vector formado por los elementos que estan por encima de la diagonal es: "
	Escribir Sin Saltar "("
	Para f<-1 hasta 10 Hacer
	    Para c<-1 hasta 10 Hacer
			si c>f y x<46 Entonces
				V[x]<- M[f,c]
				Escribir Sin Saltar V[x], " ";
			    
			FinSi
		FinPara
	FinPara
	Escribir  ")";
	
	//Mostrar elementos de la fila 7
	Escribir " ";
	Escribir Sin Saltar "Valores de la fila 7: ";
    Para c<-1 hasta 10 Hacer
		Escribir Sin Saltar M[7,c];
		Escribir Sin Saltar" ";
	Finpara
 

FinAlgoritmo
