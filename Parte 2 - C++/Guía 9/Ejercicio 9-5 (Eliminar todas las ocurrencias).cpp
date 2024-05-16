#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
void genera(vector<int> &v){
	for(unsigned int i=0; i<v.size(); i++){
		v[i] = rand()%5 + 523;
	}	
}

int buscar(vector<int> &v, int val){
	for(int i=0; i<v.size(); i++){
		if (val==v[i])
			return i;
	}
	return -1;
}
//
void show(vector<int> &v){
	for(size_t i=0; i < v.size(); i++){
		cout<< v[i]<< " - "; 
	}
}
void eliminar(vector<int> &v, int pos){
	for(int i=pos; i<v.size()-1; i++){
		v[i] = v[i+1];
	}
	v.resize(v.size()-1);
}
int main(int argc, char *argv[]) {
	vector<int> v(20);
	// - - - - genera valores - - - - - -
	genera(v);
	show(v);
	int val;
	cout << "Ingrese un valor:"<<endl;
	cin >> val;
	//(falta mostrar el arreglo)
	// - - - -  - - - - - - - - - - - - -
	
	int pos=buscar(v,val); 
	int contador =0;
	while(pos>=0){
		eliminar(v, pos);
		pos = buscar(v,val);
		contador++;
	}
	cout << "Vector modificado:"<<endl;
	show(v);
	cout << endl<<"Se eliminó "<<contador<<" veces el valor "<<val<<endl;
	
	return 0;
}


