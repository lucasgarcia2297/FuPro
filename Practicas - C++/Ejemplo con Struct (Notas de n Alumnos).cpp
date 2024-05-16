#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Struct
struct Alumno{
	string nombre;
	string apellido;
	int dni;
	vector<float> nota;
};
struct Curso{
	int codigo;
	vector<Alumno> a;
};

//Declaración de funciones
void mostrar_vector(const int &n,vector<Curso> &c);

void datos_alum(Alumno &a);

void cargar_notas(Alumno &a);

float promedio(vector<float> &nota);

//Programa principal
int main(){
	int n, N;
	cout << "N° de Comisiones: ";
	cin >> N;
	vector<Curso> c(N);
	for(size_t i=0;i<c.size();i++) {  
		cout << "\nCódigo de Comisión: ";
		cin>>c[i].codigo;
		cout <<"Cantidad de alumnos de la comisión "<<c[i].codigo<<": ";
		cin >> n;
		c[i].a.resize(n);
		for(size_t j=0;j<c[i].a.size();j++) {
			datos_alum(c[i].a[j]);
			cargar_notas(c[i].a[j]);
		}
	}
	
	mostrar_vector(n,c);
	return 0;
}

//Definición de funciones
void mostrar_vector(const int &n,vector<Curso> &c){
	float mejor = 0, prom;
	string alum;
	for(size_t j=0;j<c.size();j++) {
		cout <<"\n\n-------------------------------------------------------------\n";
		cout << "Código de comisión: " << c[j].codigo << "     N° de alumnos: " << n <<endl;		
		for(size_t i=0;i<c[j].a.size();i++) {
			cout << "\n\nNombre completo: " << c[j].a[i].apellido << ", " << c[j].a[i].nombre;
			cout << "\nDNI: "<<c[j].a[i].dni;
			prom=promedio(c[j].a[i].nota);
			cout << "\nPromedio: " << prom;
			if(mejor<prom){
				mejor = prom;
				alum = c[j].a[i].nombre;
			}
		}
		cout << "\n\n Mejor promedio de la comisión " << c[j].codigo << ": " << alum << "    Promedio: "<< mejor;
	}
}
void datos_alum(Alumno &a){
	cin.ignore();
	cout<< "Apellido/s: ";
	getline(cin,a.apellido);
	cout<<"Nombre/s: ";
	getline(cin,a.nombre);
	cout << "DNI de "<<a.nombre<<": ";
	cin >> a.dni;
}

void cargar_notas(Alumno &a){
	a.nota.resize(3);
	for(size_t j=0;j<a.nota.size();j++) { 
		cout << "Nota del parcial N°" << j+1 << " de "<<a.nombre<<": ";
		cin >> a.nota[j];
	}
}

float promedio(vector<float> &nota){
	float prom, sum=0.0;
	for(size_t i=0;i<nota.size();i++) { 
		sum += nota[i];
	}
	prom = sum/nota.size();
	return prom;
}

