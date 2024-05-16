#include <iostream>
#include <vector>
#include <matrix>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int vdor(const matrix<int>&M, int dia);

vector<int> cantidad_dia(const matrix<int> &M);
	
int total(const matrix<int> &M, int vendedor);

void mostrar_matriz(const matrix<int> &M);
	
int main(int argc, char *argv[]) {
	matrix<int> ventas(10,10,0);
	int vendedor, dia, cajas;
	matrix<int> pedidos(10,10,0);
	cout << "Código de vendedor: ";
	cin >> vendedor;
	srand(time(0));
	while(vendedor != -1){
		dia = rand()%10;
		cout << "Día: " << dia;
//		cin >> dia;
		pedidos[vendedor][dia] = pedidos[vendedor][dia]+1 ;
		cajas = 1+rand()%5;
		cout << "	Cantidad de cajas vendidas: " << cajas;
//		cin >> cajas;
		ventas[vendedor][dia] = ventas[vendedor][dia] + cajas;
		cout << "\n\nCódigo de vendedor: ";
		cin >> vendedor;
	}
	
	cout << "\n\nVentas realizadas: " << endl;
	mostrar_matriz(ventas);
	cout << "\n\nPedidos de cada vendedor: "<< endl;
	mostrar_matriz(pedidos);
	
	cout << "\n\nEl vendedor que más pedidos hizo en el dia 10 es: " << vdor(pedidos,9)+1;
	vector<int>v(10,0);
	v=cantidad_dia(ventas);
	cout << "\n\nCantidad de ventas por día: "<<endl;
	for(size_t i=0;i<v.size();i++) { 
		cout << "Día: " << i+1 << "    Ventas totales: " << v[i] << endl;
	}
	cout << "\nEl vendedor N°10 vendió " << total(ventas,9) << " cajas de jugos en total.";
	return 0;
}
void mostrar_matriz(const matrix<int> &M){
	for(size_t i=0;i<M.size(0);i++) { 
		cout << "Vendedor N°" << i+1 << ": ";
		for(size_t j=0;j<M.size(1);j++) { 
			cout << setw(4) << M[i][j];
		}
	cout << endl;
	}
}

int vdor(const matrix<int> &M, int dia){
	int may = 0, vendedor;
	for(size_t i=0;i<M.size(0);i++) { 
		if(may<M[i][dia]){
			may = M[i][dia];
			vendedor = i;
		}
	}
	return vendedor;
}


vector<int> cantidad_dia(const matrix<int> &M){
	vector<int> cant_dia(10,0);
	for(size_t i=0;i<M.size(1);i++) { 
		for(size_t j=0;j<M.size(0);j++) { 
			cant_dia[i]= cant_dia[i] + M[j][i];
		}
	}
	return cant_dia;
}

int total(const matrix<int> &M, int vendedor){
	int total =0;
	for(size_t j=0;j<M.size(1);j++) { 
		total += M[vendedor][j];
	}
	return total;
}
