Algoritmo Ejercicio4_3
	Dimension Ap[100], NoAp[100];
	m1<-0; m2<-0; nombre1<-"----- "; nombre2<-"-----"; iA<-0; iNoA<-0;
	Escribir "Ingrese nombre: "
	Leer nombre;
	Mientras nombre<>"zz" Hacer
		Escribir "Nota: ";
		leer nota;
		si nota>m1 Entonces
			m2<-m1;
			m1<-nota;
			nombre2<-nombre1
			nombre1<-nombre
		Sino
			si nota>m2 Entonces
				m2<-nota;
				nombre2<-nombre;
			FinSi
		FinSi
		
	    si nota>=7 Entonces
			iA<-iA+1;
			Ap[iA]<-nombre;
		sino
			iNoA<-iNoA+1;
			NoAp[iNop]<-nombre;
		FinSi
		Leer nombre;
	FinMientras
	
	Para i<-1 hasta iA Hacer
		Escribir Ap[i];
	FinPara
	Escribir "Mejor 1: ", nombre1, ". Nota", m1;
	Escribir "Mejor 2: ", nombre2, ". Nota", m2;
	
	Escribir "No Aprobados: "
	para i<- 1 hasta iNoA hacer
		Escribir NoAp[i];
	FinPara
	
FinAlgoritmo
