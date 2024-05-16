Algoritmo Pilotos
	NPilot <-3; PuntGanad<-0; MCGanad<-0
	Mientras NPilot>0 Hacer
		Escribir "Datos del piloto";
		Escribir "Nombre completo: ";
		Leer Nombre;
		Escribir "Puntaje: ";
		Leer Puntaje;
		Escribir "Carreras ganadas de ", nombre, ": ";
		Leer CGanadas;
		si Puntaje>PuntGanad entonces
			PuntGanad <- puntaje;
			NombGanad <- Nombre;
			MCGanad <- CGanadas
		Sino
			si Puntaje=PuntGanad Entonces
				si CGanadas>MCGanad Entonces
					PuntGanad <- puntaje;
					NombGanad <- Nombre;
					MCGanad <- CGanadas
				FinSi
			FinSi
		FinSi
		NPilot<-NPilot-1
    FinMientras
	Escribir "El ganador es ", NombGanad, " con un puntaje de: ", PuntGanad;
	
FinAlgoritmo	