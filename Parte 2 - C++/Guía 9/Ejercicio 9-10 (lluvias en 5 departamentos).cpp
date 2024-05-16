#include <iostream>
#include <matrix>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	matrix<int>m(5,12);
	unsigned int i, j;
	srand(time(0));
	//Leer la matriz
	for(i=0;i<5;i++)
		for(j=0;j<12;j++){
		/*cout<<"Ingrese m["<<i<<"] ["<<j<<"]: "<<endl;*/
		m[i][j]=rand()%12-1;
	}
	//-----Muestra la Matriz----
	cout<<"\nMatriz Original: \n";
	for(i=0;i<5;i++){
		for(j=0;j<12;j++)
			cout<<setw(4)<<m[i][j];
			cout<<endl;}
	
	int s, p, c;
	//----
	for(i=0;i<5;i++){
		s=0, c=1;
		for(j=0;j<12;j++){
			if(m[i][j]!= -1){
			   s=s+m[i][j];
			   c++;	}}
	p=s/c;
		for(j=0;j<12;j++)
			if(m[i][j]==-1)
			   m[i][j] = p;
		}
	//---Muestra la matriz modificada----
	cout<<"\n\nMatriz modificada: "<<endl;
	for(i=0;i<m.size(0);i++){
		for(j=0;j<m.size(1);j++)
			cout<<setw(4)<<m[i][j];
			cout<<endl;}
	//---Muestra la matriz modificada---
	
	//-------
	m.resize(m.size(0),m.size(1)+1);
	for(i=0;i<m.size(0);i++){
		for(j=0;j<m.size(1)-1;j++)
			m[i][12]=m[i][12]+m[i][j];
	}
	//---Muestra el ultimo vector con los totales----
	cout<<"\n\nTotales por Departamento: \n";
	for(i=0;i<5;i++){
		cout<<i<<": "<<m[i][12]<<endl;
	}
	//---Muestra el ultimo vector con los totales----
	
	//--Muestra la matriz ampliada con los totales
	cout<<"\nMatriz modificada y ampliada : \n";
	for(i=0;i<m.size(0);i++){
		for(j=0;j<m.size(1);j++)
			cout<<setw(4)<<m[i][j];
			cout<<endl;}
	return 0;
}

