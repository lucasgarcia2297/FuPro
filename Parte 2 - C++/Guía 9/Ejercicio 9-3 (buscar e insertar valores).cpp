#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;
//Ejercicio 9-3

void genera(vector<int> &v){
	for(size_t i=0; i<v.size(); i++)
		v[i] = 100 + i;
}
void show(vector<int> &v){
	for(size_t i=0;i<v.size();i++) { 
		cout<<setw(5)<<v[i];
	}
}

void insertar (int pos, int val, vector<int> &v){
	v.resize(v.size()+1);
	for(int i = v.size(); i > pos; i--){
		v[i] = v[i-1];
	}
	v[pos] = val;
}

int busca_pos(vector<int> &v, int val){
	for(size_t i=0; i<v.size(); i++){
		if (val<v[i])
			return i;
	}
	return v.size();
}
int main(int argc, char *argv[]) {
	vector<int> v(100);
	
	genera(v);
	
	show(v);
	int val, pos;
	
	cout<<endl<<"Ingrese nuevo valor: ";
	cin>> val;
	pos = busca_pos(v,val);
	cout<<"Pos: "<<pos<<endl;
	insertar(pos,val,v);
	show(v);
	
	return 0;
}

