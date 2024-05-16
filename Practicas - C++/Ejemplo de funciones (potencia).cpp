#include <iostream>
using namespace std;
/**  Ejemplo de funciones **/

//Prototipo o declaraci�n anticipada de la funci�n
int potencia(int b, int e);   		   //Pasaje por valor
//int potencia(const &b, const &e);   //Pasaje por referencia


int main() {
	int base, exponente, resultado;
	cin >> base >> exponente;
	resultado = potencia(base, exponente);   //llamada de la funci�n
	cout << endl << base << "^" << exponente << " = " << resultado;
	return 0;
}

//Implementaci�n o definici�n de la funci�n
int potencia(int b, int e){
	int res= 1;
	for(int i=0;i<e;i++) { 
		res *=b;
	}
	return res;
}

