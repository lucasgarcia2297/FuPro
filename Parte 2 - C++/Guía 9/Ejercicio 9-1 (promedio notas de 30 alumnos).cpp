#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
//Ejercicio 9-1. Modificado: se le asignan notas al azar con funcion rand().
int main() {
//Inicialización: se definen las variables
	srand(time(0));
	vector<int> notas(30);  			   //Se define el vector
	float  prom = 0;		
//-------------------------
	
//------se ingresan las notas y las muestra-------
	cout<< "Notas: " << endl;
	for(unsigned int i=0; i<notas.size(); i++){
		cin>>notas[i];
		prom += notas[i];
	}
//--------------------------------------------------
	for(unsigned int i=0;i<notas.size();i++) { 
		cout << setw(5) << notas[i];		//muestra las notas	
	}

	
//--------------Muestra el promedio-------------
	prom = prom / notas.size();			//se divide la suma de las notas por la cantidad de notas ingresadas
	cout<<endl<<endl<<"El promedio es: "<<prom<<endl;			//muestra el promedio
//-----------------------------------------------
	
//--------Muestra las notas que superan el promedio---------
	cout << endl << "Notas que superan el promedio: " << endl;
	for(unsigned int i=0; i<notas.size(); i++){
		if (notas[i] >= prom)			//si la nota numero i ingresada supera al promedio se muestra la nota 
			cout << setw(5)	<< notas[i];
	}
//-----------------------------------------------------------
	return 0;
}

