Algoritmo parcialito2_tarde
	Escribir "Ingrese la cantidad de alumnos: "
	Leer N

	// codifique debajo el algoritmo
	
	i<-1;
	Ap<-0;
	Noap<-0;
	Mientras i<=N Hacer
		i<-i+1;
		Leer nota;
		si nota>=6 entonces
			Ap<-Ap+1;
		Sino
			Noap<-Noap+1
		FinSi
	FinMientras
	si (Ap>Noap) Entonces
		Escribir "La mayoria aprobo";
	Sino
		Escribir "La mayoria NO aprobo";
	FinSi
FinAlgoritmo
