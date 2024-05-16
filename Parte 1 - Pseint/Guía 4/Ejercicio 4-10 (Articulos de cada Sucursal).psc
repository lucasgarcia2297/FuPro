Algoritmo Ejercicio4_10
	//inicializacion
	Dimension CantVentas[4,10]; sum<-0;
	//Ingresar los datos
	Para Sucursal<-1 hasta 4 Hacer
		Escribir "Ingrese la cantidad de artículos vendidos en sucursal ", Sucursal, ": "
		Para Articulos<-1 hasta 10 Hacer
			CantVentas[sucursal,Articulos]<-Azar(100)
			Escribir CantVentas[Sucursal,Articulos];
		FinPara
	FinPara
	//Mostrar la matriz con los valores correspondientes
	Escribir "---------------------------------------------------------"
	Escribir "A) cantidades vendidas por la empresa de cada articulo";
	Para sucursal <-1 hasta 4 Hacer
		Escribir Sin Saltar "sucursal ", sucursal, ": ";
		Para Articulos<-1 hasta 10 Hacer
			Escribir Sin Saltar CantVentas[sucursal,Articulos], " ";
		FinPara
		Escribir  "";
	FinPara
	
	//Total de la sucursal 3
	Escribir "---------------------------------------------------------"
	Para Articulos<-1 hasta 10 hacer
		sum<-sum+CantVentas[3,Articulos]
	FinPara
	Escribir "B) El total de ventas por la sucursal 3 fue de: ", sum, " unidades.";
	
	//La cantidad vendida por la sucursal 1 articulo 6
	Escribir "--------------------------------------------------------"
	Escribir "C) La cantidad vendida del articulo 6 por la sucursal 1 fue de: ", CantVentas[1,6];
FinAlgoritmo