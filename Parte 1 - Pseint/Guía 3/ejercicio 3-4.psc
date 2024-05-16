Algoritmo Ejercicio_3_4
	Definir v1, v2, v3, H, CO, CA como real;
	Escribir "Ingrese valores del triangulo: "
	Leer v1;
	Leer v2;
	Leer v3;
	si v1 > v2 entonces
		si v1 > v3 Entonces
			H <- v1;
			CO <- v3;
			CA <- v2;
			si H = RC((CO^2)+(CA^2)) Entonces
				area <- (CO*CA)/2
				Escribir "Es un triangulo rectangulo cuyo área es: ", area;
			Sino
				Escribir "NO PERTENECE A UN TRIANGULO RECTANGULO!!!"	
			FinSi
	    Sino 
			H <- v3
			CO <- v1
			CA <- v2
			si H = RC((CO^2)+(CA^2)) Entonces
				area <- (CO*CA)/2
				Escribir "Es un triangulo rectangulo cuyo área es: ", area;
			Sino
				Escribir "NO PERTENECE A UN TRIANGULO RECTANGULO!!!"
			FinSi
		FinSi
	Sino
		si v2 > v3 Entonces
			H <- v2;
			CO <- v1
			CA <- v3
			si H = RC((CO^2)+(CA^2)) Entonces
				area <- (CO*CA)/2
				Escribir "Es un triangulo rectangulo cuyo área es: ", area;
			Sino
				Escribir "NO PERTENECE A UN TRIANGULO RECTANGULO!!!"
			FinSi
		Sino
			H <- v3;
			CO <- v1
			CA <- v2
			si H = RC((CO^2)+(CA^2)) Entonces
				area <- (CO*CA)/2
				Escribir "Es un triangulo rectangulo cuyo área es: ", area;
			Sino
				Escribir "NO PERTENECE A UN TRIANGULO RECTANGULO!!!"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
