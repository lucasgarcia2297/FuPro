Algoritmo Ejercicio4_2
	Dimension v[120];
	i<-1
	menor<-1000000
	Para i<-1 Hasta 120 Hacer
		V[i]<-azar (120);
		Escribir v[i]
	FinPara
	Para n<-2 hasta 120 hacer
		si v[n]< menor Entonces
			menor<- v[n]
		FinSi
	FinPara	
	Para n <-2 hasta 120 con paso 2 hacer
		Escribir v[n]
	FinPara
	bandera<-0
	Para n <-2 hasta 120 con paso 2 hacer
		si v[n] mod 9 = 0 entonces
			Escribir v[n]
			bandera <- bandera+1
		FinSi
		si bandera = 0 Entonces
			Escribir "No hay multiplos de 9"
		FinSi
	FinPara
	Escribir "El menor es: ", v[n]
	
	Escribir "posiciones pares:" 
	
FinAlgoritmo
