#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;
struct ficha_alumno{int fecha_nacimiento, DNI, edad;
					string nombre, apellido, domicilio, carrera;
					char sexo;
					float altura;
					vector<int>materias;};

int main(int argc, char *argv[]) {
	ficha_alumno f_Nac, DNI, edad;
	vector<ficha_alumno> alumno(200);
	for(int i=0; i<alumno.size();i++){
		cout<<"\n\n-------Materias del alumno "<<i+1<<"-------"<<endl;
		alumno[i].materias.resize(32);
		int c=0; float prom, sum=0.0;
		for(int j=0;j<alumno[i].materias.size();j++) { 
			cout<<endl<<"Nota de materia "<<j+1<<": ";
			alumno[i].materias[j]=rand()%10;
	
			cout<<setw(4)<<alumno[i].materias[j];
			sum+=alumno[i].materias[j];
			c++;
		}
		cout<<endl;
		prom=sum/c;
		cout<<"\n\nEl promedio del alumno "<<i+1<<" es: "<<prom<<endl;
		
	}
	
				  
	return 0;
}

