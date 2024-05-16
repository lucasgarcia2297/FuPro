Algoritmo Ejercicio4_8
	//Inicializacion
	Dimension A[6,4];
	
	//Mostrar Lista de valores
	Para f<-1 hasta 6 Hacer
		Para c<-1 hasta 4 Hacer
			A[f,c]<-azar (24);
			Escribir A[f,c];
		FinPara
	FinPara
	
	//Mostrar elementos en determinada posicion
	Escribir "El elemento de la fila 2 columna 4 es: ", A[2,4];
    Escribir "El elemento de la fila 5 columna 3 es: ", A[5,3];
FinAlgoritmo
