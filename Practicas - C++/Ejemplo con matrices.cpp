#include <iostream>
#include <matrix>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

matrix<unsigned int> generar(matrix<unsigned int> &m){
	srand(time(0));
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			m[i][j] = rand()%1000001;
		}
	}
	return m;
}
void muestra(const matrix<unsigned int> &m){
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			cout << setw(12) << m[i][j];
		}
		cout << endl;
	}
}
int main() {
	unsigned int f, c;
	cout << "N° de Filas: ";
	cin >> f;
	cout << endl << "N° de Columnas: ";
	cin >> c;
	matrix<unsigned int> m(f,c);
	generar(m);
	muestra(m);
	return 0;
}

