#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> generar_vector(vector<int> v);
void mostrar_vector(const vector<int> &v);
int menor(vector<int> v, int men);
int mayor(vector<int> v, int may);

int main() {
	int n;
	cout << "Tamaño del vector: "<< endl;
	cin >> n;
	vector<int> v(n);
	v = generar_vector(v);
	cout << "Valores del vector: " << endl;
	mostrar_vector(v);
	int men = v[0], may = v[0];
	cout << "\nEl menor elemento es: " << menor(v, men);
	cout << "\nEl mayor elemento es: " << mayor(v, may);
	
	return 0;
}

vector<int> generar_vector(vector<int> v){
	srand(time(0));
	for(size_t i=0;i<v.size();i++) { 
		v[i] = rand()%100;
	}
	return v;
}
	
void mostrar_vector(const vector<int> &v){
	for(size_t i=0;i<v.size();i++) { 
		cout <<  "V["<<i<<"] = " << v[i] << endl;
	}
}

int menor(vector<int> v, int men){
	if(v.size()>1){
		if(men >= v[v.size()-1]){
			men = v[v.size()-1];
		}
		v.resize(v.size()-1);
		return menor(v,men);
	}
	else 
	   return men;
}

int mayor(vector<int> v, int may){
	if(v.size()>1){
		if(may <= v[v.size()-1]){
			may = v[v.size()-1];
		}
		v.resize(v.size()-1);
		return mayor(v, may);
	}
	else 
	   return may;
}



