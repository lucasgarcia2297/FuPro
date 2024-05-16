#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std;
/** Ejercicio 9-2:
	Generar aleatoriamente un arreglo lineal de 20 elementos numéricos, con enteros                      
	aleatorios entre 100 y 150 y mostrarlo en pantalla. Luego ingresar dos valores en las variables m y p
	El valor m debe ser insertado en la posición p del arreglo.
	Mostrar el vector modificado. **/

int main(int argc, char *argv[]) {
//-------inicializacion-------
	int m, p;
	vector<int> elementos(20);
//----------------------------
	
//-----Generar elementos al azar y los muestra-----
	for(unsigned int i=0; i<elementos.size(); i++){
		elementos[i] =100 + rand()%51;
		cout << setw(5) << elementos[i];
	}
//-------------------------------------------------

//--Se ingresa un nuevo valor (m) y la posicion (p) en la que se va a insertar--
	cout << endl << "ingrese otro valor: " << endl;
	cin >> m;
	cout << "Ingrese la posicion en donde quiere almacenar el valor: " << endl;
	cin >> p;
//------------------------------------------------------------------------------
	
//--Mueve los valores, superiores a p, a una posición más alta--
	elementos.resize(elementos.size()+1);		//se redefine el vector.
	for(unsigned int i = elementos.size()-1; i > p; i--){
		elementos[i] = elementos[i-1];
	}
//--------------------------------------------------------------
	
//--se inserta el valor en la posicion p y muestra el vector modificado--
	elementos[p] = m;
	for(unsigned int i=0; i<elementos.size(); i++){
		cout << setw(5) << elementos[i];
	}
//-----------------------------------------------------------------------
	return 0;
}

