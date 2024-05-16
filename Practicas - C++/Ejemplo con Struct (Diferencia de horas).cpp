#include <iostream>
#include <cstdlib>
using namespace std;
struct datatime{int hh,mm,ss;};

datatime dif_time(const datatime &n1, const datatime &n2);
int main() {
	datatime n1, n2, dif;
	cout << "Tiempo N°1: (hh/mm/ss)" << endl;
	cin >> n1.hh >> n1.mm >> n1.ss;
	cout << "Tiempo N°2: (hh/mm/ss)" << endl;
	cin >> n2.hh >> n2.mm >> n2.ss;
	
	dif = dif_time(n1, n2);
	cout << "Diferencia entre los tiempos 1 y 2: " << dif.hh << "horas " << dif.mm << "minutos " << dif.ss << "segundos.";
	return 0;
}

datatime dif_time(const datatime &n1, const datatime &n2){
	int aux, t1, t2; datatime res;
	t1 = (n1.hh*3600)+(n1.mm*60)+n1.ss;
	t2 = (n2.hh*3600)+(n2.mm*60)+n2.ss;
	aux = abs(t1-t2);
	res.hh = (aux/3600);
	res.mm = (aux%3600)/60;
	res.ss = ((aux%3600)%60);
	return res;
}
