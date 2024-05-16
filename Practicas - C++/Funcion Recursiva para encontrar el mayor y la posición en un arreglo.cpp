#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <tuple>
using namespace std;
tuple<float, int> mayor(vector<float> v, float max, int pos);
vector<float> generar_vector(vector<float> v, int n);
void mostrar_vector(const vector<float> &v);
int main() {
	srand(time(0));
	int n;
	cout << "Cantidad de datos: ";
	cin>> n;
	vector<float> v;
	v= generar_vector(v,n);
	mostrar_vector(v);

	int pos = 0;
	float max = v[0];
	tie(max,pos) = mayor(v,max,pos);
	cout << "\nEl mayor es: " << max << " y esta en la posición " << pos;
	return 0;
}

vector<float> generar_vector(vector<float> v, int n){
	v.resize(n);
	for(size_t i=0;i<v.size();i++) { 
		v[i] = ((rand()%1000)*(rand()%10000)*5)/100.0;
	}
	return v;
}
void mostrar_vector(const vector<float> &v){
	for(size_t i=0;i<v.size();i++) { 
		cout << "V[" << i << "] = "<< v[i] << endl;
	}
}

tuple<float, int> mayor(vector<float> v, float max, int pos){
	if (v.size()==1)
		return make_tuple(max,pos);
	else
		if(v[v.size()-1]>max){
			max = v[v.size()-1];
			pos = v.size()-1;
		}
		v.resize(v.size()-1);
		return mayor(v,max,pos);
}
//tuple<int,int> max_val(const vector<int> &v){
//	int pos = 0, max = v[0];
//	for(size_t i=1;i<v.size();i++) { 
//		if(v[i]>=max){
//			max = v[i];
//			pos = i;
//		}
//	}
//	return make_tuple(max,pos);
//}
