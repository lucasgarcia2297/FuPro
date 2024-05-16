#include <iostream>
using namespace std;
int validar_edad(int edad);

int main(int argc, char *argv[]) {
	int edad;
	string nombre;
	for (int i=0; i<475; i++);
	cout<<"Nombre: "<<endl;
	cin>>nombre;
	cout<<"Edad: "<<endl;
	cin>>edad;
	validar_edad(edad);
	
	return 0;
}
int validar_edad(int edad)
{	int validar_edad;
	if ((edad>11) && (edad<91))
		return edad;
	else
		
