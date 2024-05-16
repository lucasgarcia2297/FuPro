Algoritmo Ejercicio4_10
	//Inicializacion.
	Dimension M[4, 10]; //4 sucursales, 10 articulos
	
	//Cargar los datos
	Para s<-1 hasta 4 Hacer
		Para a<-1 hasta 10 Hacer
			//Leer m[s,a];
			m[s,a] <- azar(10);
			Escribir Sin Saltar m[s,a], " ";
			
		FinPara
		Escribir "";
	FinPara
	
	//A) Cantidad vendida por la empresa de cada articulo 
	//Sumar los valores para sacar el total de articulos
	Para a<-1 hasta 10 Hacer
		total_art <- 0;
		para s<-1 hasta 4 Hacer
			total_art <- total_art + m[s,a];
		FinPara
		Escribir "Total de articulos ", a, ": ", total_art;
	FinPara
	
	//B) B. El total de unidades vendidas por la sucursal 3, sumando todos los artículos. 
	//sumar los articulos vendidos para obtener el total de la sucursal 3.
	suc3<-0
	Para a<-1 hasta 10 Hacer
		suc3<-suc3 + M[3,a];
	FinPara
	
	//C) La cantidad vendida por la sucursal 1 del artículo 6. 
	//Muestra los valores
	Escribir "Los articulos vendidos en la sucursal 3 son: ", suc3;
	Escribir "Suc 1, articulo 6: ", m[1,6]
	
	//En el caso que se quiera el total de unidades vendidas de cada sucursal
	Para s<-1 hasta 4 Hacer
		Total_por_suc<-0
		Para a<-1 hasta 10 Hacer
			Total_por_suc <- Total_por_suc +  M[s,a];
		FinPara
		Escribir "Total de sucursal ", s, ": ", Total_por_suc;
	FinPara
FinAlgoritmo
