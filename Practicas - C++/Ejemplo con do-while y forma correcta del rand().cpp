#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	unsigned int n, i=0;
	cout << "Cantidad de Alumnos: ";
	cin >> n; 
	vector<int>notas(n);
	srand(time(0));
	do{ 
		notas[i]= rand()%11;
		i++;
	}
	while (i<notas.size());
	cout << "\n\nLista de notas: " << endl;
	for(size_t i=0;i<notas.size();i++) { 
		cout << "Alumno N°" << i+1 << ": " << notas[i]<< endl; 
	}
	
	return 0;
}

