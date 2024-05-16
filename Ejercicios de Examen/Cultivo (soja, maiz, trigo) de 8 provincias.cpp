#include <iostream>
#include <matrix>
#include <vector>


#include <ctime>
#include <cstdlib>
using namespace std;

struct cultivo{
	int soja, trigo, maiz;
};




vector<int> comparacion(int anio1, int anio2, const matrix<cultivo> &M);

int max_soja(int anio, const matrix<cultivo> &M);

int total_maiz(int anio, matrix<cultivo> &M);
int main() {
	int cant, CodProv, anio;
	string Tipocultivo;
	matrix<cultivo> producciones(3,3);
	
	for(size_t i=0;i<27;i++) { 
		srand(time(0));	
		cout << "\nCodigo de provincia (1-3): ";
		cin >> CodProv;
		anio = 2005+rand()%3;
		cout << "Año (2005 - 2007): " << anio << endl;
//		cin >> anio;
		cant = 2+rand()%29;
		cout << "Cantidad producida (en Tn): " << cant <<endl;
//		cin >> cant;
		cout << "Tipo de cultivo (soja - maiz - trigo): ";
		cin >> Tipocultivo;
		
		if(Tipocultivo == "soja"){
			producciones[CodProv-1][anio-2005].soja = cant;
			continue;
		}
		if(Tipocultivo == "maiz"){
			producciones[CodProv-1][anio-2005].maiz = cant;
			continue;
		}
		if(Tipocultivo == "trigo"){
			producciones[CodProv-1][anio-2005].trigo = cant;
			continue;
		}
		i--;
	}
	
	vector<int> provincias = comparacion(2005,2007,producciones);
	cout << "\n\nLista de provincias que tuvieron produccion menor de trigo"
		 " en 2014 respecto de 2005:" << endl;
	for(size_t i=0;i<provincias.size();i++) { 
		cout << "Provincia N°" << provincias[i]+1 << endl;
	}
	cout << "\nIngrese un año (2005 - 2007): ";
	cin >> anio;  //2008;
	int mayor = max_soja(anio, producciones);
	cout << "\nLa provincia que produjo mayor cantidad de soja en el "<< anio
		<< " fue la número " << mayor;
	int total = total_maiz(2006,producciones);
	cout << "\n\nTotal de maíz producido por las 8 provincias en 2006: "<<total<<" Tn."<< endl;

	
	return 0;
}

int total_maiz(int anio, matrix<cultivo> &M){
	int total = 0;
	for(size_t i=0;i<M.size(0);i++) { 
		total += M[i][anio-2005].maiz;
	}
	return total;
}

int max_soja(int anio, const matrix<cultivo> &M){
	int mayor = M[0][anio-2005].soja, codprov = 0;
	for(size_t i=1;i<M.size(0);i++) { 
		if(mayor < M[i][anio-2005].soja){
			mayor = M[i][anio-2005].soja;
			codprov = i+1;
		}
	}
	return codprov;
}

vector<int> comparacion(int anio1, int anio2, const matrix<cultivo> &M){
	vector<int> prov;
	for(size_t i=0;i<M.size(0);i++) { 
		if(M[i][anio2-2005].trigo < M[i][anio1-2005].trigo){
			prov.push_back(i+1);
		}
	}
	return prov;
}
