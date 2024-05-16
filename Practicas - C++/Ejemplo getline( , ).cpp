#include <iostream>
using namespace std;

int main() {
	unsigned int edad, dni, telefono;
	string nom, ap, direccion;
	
	cout << "Apellidos: " << endl;
	getline(cin, ap);
	
	cout << "Nombres: " << endl;
	getline(cin, nom);
	
	cout << "Edad: " << endl;
	cin >> edad;
	cout << "DNI: " << endl;
	cin >> dni;
	cin.ignore();
	cout << "Dirección: " << endl;
	getline(cin, direccion);
	
	cout << "Telefono: " << endl;
	cin >> telefono;
	
	cout << "\n\n Datos personales: " << endl;
	cout << "Nombre Completo: "<< ap << ", " << nom << endl;
	cout << "Edad: " << edad << endl;
	cout << "DNI: "<< dni << endl;
	cout << "Dirección: " << direccion << endl;
	cout << "Telefono: " << telefono;

return 0;
}
