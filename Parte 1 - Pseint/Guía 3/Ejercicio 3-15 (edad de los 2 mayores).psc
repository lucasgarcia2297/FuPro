Algoritmo Ejercicio_3_15
	Definir alum, edad, acum, cont, Ma1, Ma2, edad1, edad2 Como Entero;
	Definir nombre, Nombre1, Nombre2 Como Caracter;
	Escribir "¿Cuántos alumnos son? ";
	Leer alum;
	Escribir "Datos de cada alumno:";
	cont <- 1;
	acum <- 0;
	edad1 <- 0;
	Nombre1<- 'h';
	edad2<-0;
	Nombre2<- 'j';
	mientras cont<= alum hacer
		Escribir "Apellido y nombre: ";
		Leer nombre;
		Escribir "Edad: ";
		Leer edad;
		cont <- cont+1;
		si edad > edad1 Entonces
			edad1 <- edad;
			Nombre1 <- nombre;
	        si edad2 > edad1 entonces
		        edad1 <- edad2;
		        Nombre1<- Nombre2;
			FinSi
		Sino
			si edad2 < edad Entonces
				edad2 <- edad;
			FinSi
		FinSi
	
    FinMientras
    Escribir "Los 2 mas grandes son ",Nombre1," y ",Nombre2," con ",edad1, " y ",edad2," años de edad.";
FinAlgoritmo