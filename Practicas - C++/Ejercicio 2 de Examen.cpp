#include<iostream>
#include<iomanip>
#include<matrix>
#include<vector>

#include <cstdlib>
#include <ctime>
using namespace std;

vector<float> saldo_final(const matrix<float> &M,
						  const vector<float> &v);

int saldo_neg(const vector<float> &saldo);

tuple<int, float, int>Mayor_gasto(const matrix<float> &M);

int main(){
	vector<float> facultad(10);
	matrix<float> gastos(10,12,0);
	int mes, codigo, may_fac, may_mes, datos, i=0;
	float monto, presupuestos, may_monto;
	srand(time(0));
	for(size_t i=0;i<facultad.size();i++) { 
		cout << "Facultad N°" <<i+1 << " Presupuesto: $";
//		cin >> presupuestos;
		presupuestos = (30+rand()%91)*1000;
		facultad[i] = presupuestos;
		cout << facultad[i] << endl;
	}
	cout << "Cantidad de datos: ";
	cin >> datos;
	for(int i=0;i<datos;i++) {
		codigo = rand()%10;
		cout << "\nCódigo de Facultad: " << codigo+1;
//		cin >> codigo;
		
		mes = rand()%12;
		cout << "   Mes: " << mes+1;
//		cin >> mes;
		
		monto = (1+rand()%10000)/10.0;
		cout << "   Monto: " << monto;
//		cin >> monto;
		
		gastos[codigo][mes] += monto;
		
	}
	
	cout << endl << endl;
	for(size_t i=0;i<gastos.size(0);i++) { 
		cout << "Facultad N°"<< i+1<< ": ";
		for(size_t j=0;j<gastos.size(1);j++) { 
			cout<< setw(8) << gastos[i][j] << "  ";
		}
		cout << endl;
	}
	vector<float> s_final = saldo_final(gastos, facultad); 
	cout << "\nSaldos finales: "<< endl;
	for(size_t i=0;i<s_final.size();i++) { 
		cout << "Facultad N°" << i+1 << ": $"<< s_final[i] << endl;
	}
	
	cout << "\nHubo un déficit en " << saldo_neg(s_final) <<" facultades.";
	
	tie(may_fac, may_monto, may_mes) = Mayor_gasto(gastos);
	
	cout << "\n\nLa Facultad N°" << may_fac+1 << " tuvo el mayor gasto, el cual fue de $" << may_monto << " en el mes N°" << may_mes+1;
	
	return 0;

}
vector<float> saldo_final(const matrix<float> &M,
						  const vector<float> &v){
	vector<float> suma(10,0); 
	vector<float> saldo(10);
	for(size_t i=0;i<M.size(0);i++) { 
		for(size_t j=0;j<M.size(1);j++) { 
			suma[i]+=M[i][j];
		}
		saldo[i] = v[i] - suma[i];
	}
	return saldo;
}

int saldo_neg(const vector<float> &saldo){
	int cont = 0;
	for(size_t i=0;i<saldo.size();i++) { 
		if(saldo[i]<0)
			cont++;
	}
	return cont;
}

tuple<int, float, int>Mayor_gasto(const matrix<float> &M){
	int fac, mes;
	float Monto = 0;
	for(size_t i=0;i<M.size(0);i++) { 
		for(size_t j=0;j<M.size(1);j++) { 
			if(Monto < M[i][j]){
				Monto = M[i][j];
				fac = i;
				mes = j;
			}
		}
	}
	return make_tuple(fac, Monto, mes);
}


	
