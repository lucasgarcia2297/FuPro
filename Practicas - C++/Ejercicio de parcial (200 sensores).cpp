#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
vector<float> generar_vector(vector<float> v){
	srand(time(0));
	for(size_t i=0;i<v.size();i++) { 
//		cin >> v[i];
		v[i] = (-9000 + rand()%20000)/100.0;
	}
	return v;
}
void Mostrar_vector(const vector<float> &v){
	for(size_t i=0;i<v.size();i++) { 
		cout << "Sensor N°"<<i+1<< ": = "<< v[i]<< endl;
	}
}

float promedio(float max, float min){
	float res;
	res = (max+min)/2.0;
	return res;
}

vector<float> reemplaza(vector<float> v, float prom, int &cont){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<0){
			v[i] = prom;
			cont++;
		}
	}
	return v;
}
int main() {
	vector<float> sensor(200);
	sensor = generar_vector(sensor);
	cout << "Valores originales: "<< endl;
	Mostrar_vector(sensor);
	float Ma=0, men = 99999, prom;
	int cont =0;
	
	for(size_t i=0;i<sensor.size();i++) { 
		if(sensor[i]>Ma)
			Ma = sensor[i];
		if(sensor[i]>=0 && sensor[i]<=men){
			men = sensor[i];
		}
	}
	
	prom = promedio(Ma, men);
	vector<float> sensor_2 = reemplaza(sensor, prom, cont);
	cout << "\n\nValores modificados: " << endl;
	Mostrar_vector(sensor_2);
	cout << "\n Se hicieron "<< cont << " reemplazos.";

	return 0;
}

