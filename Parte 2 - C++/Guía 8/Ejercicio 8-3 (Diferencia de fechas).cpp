#include <iostream>
using namespace std;
//ingresando 2 fechas determinar la diferencia de a�os entre �stas.

int dif (int fecha1, int fecha2);
int main(int argc, char *argv[]) {
	int fecha1, fecha2;
	cout<<"Ingrese fecha de nacimiento (AAAA/MM/DD): "<<endl;
	cin>>fecha1;
	cout<<"Ingrese fecha actual (AAAA/MM/DD): "<<endl;
	cin>>fecha2;
	cout<<"La diferencia en a�os es de: "<<dif(fecha1,fecha2)<<" a�os.";
	return 0;
}	
int dif (int fecha1, int fecha2){
	int dif=((fecha2-fecha1)/10000);
	return dif;
	
}

