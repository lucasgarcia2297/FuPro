#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	//Ejercicio 6-7
	float radio, area;
	cout<<"ingrese radio: ";
	cin>>radio;
	area = 3.1415*pow(radio,2.0);
	cout<<"El valor del área es: "<<area;
	return 0;
}

