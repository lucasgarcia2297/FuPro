#include<iostream> 
using namespace std;

int main() {
	int cont1, May = -1, men = 99999, cont2, n, cantidad;
	cin >> cantidad;
	for(int i=1;i<=cantidad;i++) { 
		cin >> n;
		if(n>May){
			May = n;
			cont1 = i;
		}
		if (n< men ){
			men = n;
			cont2 = i;
		}
	}
	cout << "Mayor: " << May << endl;
	cout << "Posicion: " << cont1 << endl << endl;
	cout << "Menor: " << men << endl;
	cout << "Posicion: " << cont2 << endl << endl;
	return 0;
}

