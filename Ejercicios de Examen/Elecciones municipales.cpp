#include <iostream>
#include <matrix>
#include <vector>
#include <tuple>

using namespace std;

struct candidato{
	string nom;
	int votos;

};

struct datos{
	int votos_blanco;
	vector<candidato> partido;

};
tuple<int, float> ganador(vector<candidato> P,int total);

int max_vtos_blanco(const matrix<datos> &M);

float porcentaje(int total, int votos);

int main() {
	int codigo, cod_barrio, total_votos = 0, cod_gan;
	string nombre;
	vector<candidato> partido(2);
	matrix<datos> mesas(20,3);   //145 mesas electorales - 18 barrios.
	for(size_t i=0;i<mesas.size(0);i++) { 
		for(size_t j=0;j<mesas.size(1);j++) { 
			mesas[i][j].partido.resize(partido.size());
		}
	}
	for(size_t i=0;i<partido.size();i++) { 
		cout << "\nNombre del candidato: ";
		cin.ignore();
		getline(cin, nombre);
		cout << "\nCódigo de partido: ";
		cin >> codigo;
		partido[codigo-1].nom = nombre; 
	}
	float porc_ganador;
	cout << "\n-----------------Datos de las mesas electorales-------------------\n";
	for(size_t i=0;i<mesas.size(0);i++) { 
		cout << "\n\nCódigo de barrio: ";
		cin >> cod_barrio;
		mesas[i][cod_barrio-1].votos_blanco = rand()%5;
		cout << "\nCantidad de votos en blanco: " << mesas[i][cod_barrio-1].votos_blanco;
//		cin >> mesas[i][cod_barrio-1].votos_blanco;
		total_votos += mesas[i][cod_barrio-1].votos_blanco;
		for(size_t j=0;j<partido.size();j++) { 
			mesas[i][cod_barrio-1].partido[j].votos = (10+rand()%189)+(2+rand()%45)*(rand()%3);
			cout << "\nCantidad de votos partido "<< j+1 << ": " << mesas[i][cod_barrio-1].partido[j].votos;
//			cin >> mesas[i][cod_barrio-1].partido[j].votos;
			total_votos += 	mesas[i][cod_barrio-1].partido[j].votos;   //total de votos incluido los votos en blanco;
			partido[j].votos += mesas[i][cod_barrio-1].partido[j].votos;
		}
	}
	cout << "\n-----------------------------------------------------------------\n";
	tie(cod_gan, porc_ganador) = ganador(partido, total_votos);
	cout << "\nCódigo del partido ganador: " << cod_gan+1;			   //a)
	cout << "\nPorcentaje de votos obtenidos: %" << porc_ganador;		
	cout << "\nEl próximo intendente será: " << partido[cod_gan].nom << endl; //b)
	cout << "\n-----------------Porcentaje de votos de cada partido--------------\n";  //c)
	for(size_t i=0;i<partido.size();i++) { 
		cout << "\nPartido " << i+1 << ": %"<< porcentaje(total_votos, partido[i].votos);
	}
	cout << "\n----------------------------------------------------------\n";
	cout << "\nBarrio con mayor cantidad de votos en blanco: " << max_vtos_blanco(mesas)+1; //d)

	return 0;
}
tuple<int, float> ganador(vector<candidato> P,int total){
	int codigo, mayor = 0;
	float porc;
	for(size_t i=0;i<P.size();i++) { 
		if(mayor<P[i].votos){
			mayor = P[i].votos;
			codigo = i;
		}
	}
	porc = porcentaje(total, mayor);
	return make_tuple(codigo,porc);
}
int max_vtos_blanco(const matrix<datos> &M){
	int codigo, mayor = 0;
	vector<int> v_blaco_barrios(M.size(1),0);
	for(size_t i=0;i<M.size(1);i++) { 
		for(size_t j=0;j<M.size(0);j++) { 
			v_blaco_barrios[i] += M[j][i].votos_blanco;
		}
	}
	for(size_t i=0;i<v_blaco_barrios.size();i++) { 
		if(mayor<v_blaco_barrios[i])
			codigo = i;
	}
	return codigo;
}

float porcentaje(int total, int votos){
	float porc = (votos*100.0)/(total*1.0);
	return porc;
}
	
