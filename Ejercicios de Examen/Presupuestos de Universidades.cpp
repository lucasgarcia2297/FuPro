#include <iostream>
#include <iomanip>
#include<matrix>

#include <ctime>
#include <cstdlib>
using namespace std;

void mostrar_matriz(const matrix<float> &M);
matrix<float> totales(const matrix<float> &M);
int mayor_aporte(const matrix<float> &M, int anio);
int main() {
	matrix<float> presupuesto(10,15,0);
	int cod_univ, anio, univ_may;
	float monto;
	srand(time(0));
	cout << "Código de Universidad (1-10): ";
	cin >> cod_univ;
	
	while(cod_univ != 0){
		anio = 1995+rand()%16;
		cout << "Año(1995-2009): " << anio << endl;
//		cin >> anio;
		monto = 100+rand()%9990;
		cout << "Monto: $"<< monto;
//		cin >> monto;
		
		presupuesto[cod_univ-1][anio-1995] += monto;
		
		cout << "\n\nCódigo de Universidad (1-10): ";
		cin >> cod_univ;
		
	}
	cout << "\n_______________________________________________________Montos establecidos desde 1995 a 2009___________________________________________________________________________\n";
	
	cout << "Universidad      ";
	for(size_t j=1995;j<2010;j++) { 
		cout <<"|"<<setw(6) << right << j << setw(4); 
	}
	
	cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	mostrar_matriz(presupuesto);
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	
	matrix<float> total = totales(presupuesto);
	cout << "\n\n-----------Montos Totales de cada Universidad--------------\n";
	mostrar_matriz(total);
	
	univ_may = mayor_aporte(presupuesto, 2003);
	cout << "\nEn el 2003 la Universidad que recibió mas aportes fue la N°"<<univ_may;
	
	cout << "\nEl total recibido por la universidad 6 en 1999 fue de $"<< presupuesto[5][4];
	return 0;
}

void mostrar_matriz(const matrix<float> &M){
	for(size_t i=0;i<M.size(0);i++) { 
		cout << "Universidad N°" << i+1 << ": ";
		for(size_t j=0;j<M.size(1);j++) { 
			cout  <<left<< "|$"<<setw(8)<< setfill('.')<<right <<M[i][j] ;
		}
		cout << endl;
	}
}
int mayor_aporte(const matrix<float> &M, int anio){
	int univ;
	float mayor = M[0][anio-1995];
	for(size_t i=1;i<M.size(0);i++) { 
		if(M[i][anio-1995] > mayor){
			mayor = M[i][anio-1995];
			univ = i+1; 
		}
	}
	return univ;
}
matrix<float> totales(const matrix<float> &M){
	matrix<float> total(M.size(0),1,0);
	for(size_t i=0;i<M.size(0);i++) { 
		for(size_t j=0;j<M.size(1);j++) { 
			total[i][0] += M[i][j];
		}
	}
	return total;
}
