#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float x=4.5, y=12.3, r;
	int z=10, u=8;
	char letra = 'm';
	cout<<"Dado x=4.5 , y=12.3 , z=10, u=8 y letra = 'm': "<<
	//a)x<y
	r = (x<y);
	cout<<setw(10)<<"a) ¿x<y?"<<endl<<"VERDADERO = 1 o FALSO = 0"<<endl<<"Respuesta: "<<r;
	
	//b)(x <= y) || (letra == 'j')
	r = (x<=y) || (letra == 'j');
	cout<<setw(10)<<"b)(x <= y) || (letra == 'j')"<<endl<<"VERDADERO = 1 o FALSO = 0"<<endl<<"Respuesta: "<<r;;
	return 0;
}

