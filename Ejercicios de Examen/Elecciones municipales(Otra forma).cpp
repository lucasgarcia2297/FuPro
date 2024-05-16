#include<iostream>
#include<matrix>
#include<vector>


#include <tuple>
#include <ctime>
#include <cstdlib>
using namespace std;

struct partido{
	string nom;
	int cant_vtos;
};



tuple<int, float> ganador(const matrix<partido> &p, int total);

vector<float> porc_votos(const matrix<partido> &p, int total);

int max_vtos_blanco(const vector<int> &votos_blanco);

int main(){
	matrix<partido> elecciones(3,3);
	vector<int> votos_blanco(elecciones.size(1),0);
	string nombre;
	int cod_partido, cod_barrio, total_votos = 0, en_blanco, votos;
	for(size_t i=0;i<elecciones.size(0);i++) {  
		cout << "\nNombre del candidato: ";
		getline(cin,nombre);
		cout << "Codigo de partido (1-3): ";
		cin >> cod_partido;
		for(size_t j=0;j<elecciones.size(1);j++) { 
			elecciones[cod_partido-1][j].nom = nombre;
		}
		cin.ignore();
	}
	
	for(size_t i=0;i<6;i++) { 
		srand(time(0));
		cout << "\n----------------------------\n";
		cout << "Codigo de barrio (1-5): ";
		cin >> cod_barrio;
		en_blanco = rand()%15;
		cout << "\nCantidad de votos en blanco: " << en_blanco;
//		cin >> en_blanco;
		votos_blanco[cod_barrio-1]+= en_blanco;
		total_votos += en_blanco;
		for(size_t i=0;i<elecciones.size(0);i++) {	
			votos = 15+rand()%26;
			cout << "\nCantidad de votos partido "<< i +1<< ": "<< votos;
//			cin >> votos;
			elecciones[i][cod_barrio-1].cant_vtos += votos;
			total_votos += votos; 
		}
	}
	cout << "\n\nTotal de votos: "<< total_votos;
	int cod_ganador;
	float porcentaje;
	tie(cod_ganador,porcentaje) = ganador(elecciones,total_votos);
	cout << "\n\n-----------------------------Ganador--------------------------------\n";
	cout << "Codigo de partido: "<< cod_ganador << "  Porcentaje de votos: %"<<porcentaje;
	cout << "\n\nProximo intendente: " << elecciones[cod_ganador-1][0].nom<< endl;
	cout << "----------------------------------------------------------------------\n";
	cout <<"Porcentajes de votos de cada partido: "<< endl;
	vector<float> porc_partido = porc_votos(elecciones,total_votos);
	for(size_t i=0;i<porc_partido.size();i++) { 
		cout << elecciones[i][0].nom << ": %"<< porc_partido[i]<<" de votos."<< endl; 
	}
	int barrio = max_vtos_blanco(votos_blanco);
	cout << "\nBarrio en el que mayor cantidad de votos en blanco hubo: " << barrio;
}

tuple<int, float> ganador(const matrix<partido> &p,int total){
	int codigo, mayor = 0;
	vector<int> total_votos(p.size(0),0);
	float porcentaje;
	for(size_t i=0;i<p.size(0);i++) { 
		for(size_t j=0;j<p.size(1);j++) { 
			total_votos[i] += p[i][j].cant_vtos;
		}
		if(mayor < total_votos[i]){
			mayor = total_votos[i];
			codigo = i+1;
		}
	}
	porcentaje = (mayor*100)/(total*1.0);
	
	return make_tuple(codigo, porcentaje);
}

vector<float> porc_votos(const matrix<partido> &p, int total){
	vector<float> porcentajes(p.size(0));
	vector<int> total_votos(p.size(0));
	for(size_t i=0;i<p.size(0);i++) {
		for(size_t j=0;j<p.size(1);j++) { 
			total_votos[i] += p[i][j].cant_vtos;
		}
		porcentajes[i] = (total_votos[i]*100)/(total*1.0);
	}
	return porcentajes;
}
int max_vtos_blanco(const vector<int> &votos_blanco){
	int mayor  = 0, codigo = 0 ;
	for(size_t i=0;i<votos_blanco.size();i++) { 
		if(mayor < votos_blanco[i]){
			mayor = votos_blanco[i];
			codigo = i+1;
		}
	}
	return codigo;
}
