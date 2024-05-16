#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Ejercicio 6-7
	int edad1, edad2, fecha1, fecha2;
	string nombre1, nombre2;  
	cout<<"Nombre de la primer persona: ";     
	getline(cin,nombre1);
	cout<<"edad: ";
	cin>>edad1;
	cout<<"Nombre de la segunda persona: ";
	cin.ignore();      //para eliminar el "enter" y muestre separado el nombre y la edad
	getline(cin,nombre2);
	cout<<"Edad: ";
	cin>>edad2;
	fecha1 = 2017 - edad1;
	fecha2 = 2017 - edad2;
	cout<<nombre1<<" "<<fecha1<<endl<<nombre2<<" "<<fecha2;
	return 0;
}

