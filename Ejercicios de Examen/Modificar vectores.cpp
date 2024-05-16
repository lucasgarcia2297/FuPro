#include <iostream>
#include <tuple>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
vector<int> generar_vector(vector<int> v);
tuple<vector<int>, vector<int>> modificar_vector(vector<int> v1, vector<int> v2, int p1, int p2);
void mostrar_vector(const vector<int> &v);
int main(int argc, char *argv[]) {
	vector<int> v1(5);
	vector<int> v2(7);
	v1 = generar_vector(v1);
	v2 = generar_vector(v2);
	int p1, p2;
	cout << "-------valor vector 1---------" << endl;
	mostrar_vector(v1);
	cout << "\n-------------------------------\n";
	cout << "\n------valor vector 2---------" << endl;
	mostrar_vector(v2);
	cout << "\n-------------------------------\n";
	cout << "\nPosicion 1: ";
	cin >> p1;
	cout << "\nPosicion 2: ";
	cin >> p2;
	tie(v1,v2) = modificar_vector(v1,v2,p1,p2);
	cout << "\n------vector 1 modificado-------\n";
	mostrar_vector(v1);
	cout << "\n------vector 2 modificado-------\n";
	mostrar_vector(v2);
	return 0;
}
vector<int> generar_vector(vector<int> v){
	srand(time(0));
	for(size_t i=0;i<v.size();i++) { 	
		v[i] = rand()%100;
	}
	return v;
}

tuple<vector<int>, vector<int>> modificar_vector(vector<int> v1, vector<int> v2, int p1, int p2){
	int elemento = v1[p1];
	for(size_t i=p1;i<v1.size();i++) { 
		v1[i] = v1[i+1];
	}
	v1.resize(v1.size()-1);
	v2.resize(v2.size()+1);
	for(int i=v2.size();i>p2;i--) { 
		v2[i] = v2[i-1];
	}		
	v2[p2] = elemento;
	return make_tuple(v1,v2);
		
}
void mostrar_vector(const vector<int> &v){
	for(size_t i=0;i<v.size();i++) { 
		cout << "V["<<i<<"] = "<< v[i] << endl;
	}
}
