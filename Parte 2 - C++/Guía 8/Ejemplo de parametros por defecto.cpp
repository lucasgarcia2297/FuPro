#include <iostream>
using namespace std;
//parametros por defecto
int suma(int a=10, int b=100, int c=1000);  //parametros por defecto (se coloca arriba)
//no hace falta colocar los nombres de las variables.
int main(int argc, char *argv[]) {
	
	cout<<suma(3,6)<<endl;	
	cout<<suma()<<endl;
	//en el parentesis se colocan los valores de a, b y c. Si no se coloca nada en c, se toma el valor por defecto.
	return 0;
}
int suma (int a, int b, int c)
{ return a+b+c; }

