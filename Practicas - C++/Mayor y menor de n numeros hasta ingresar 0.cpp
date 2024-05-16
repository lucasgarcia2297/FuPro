#include <iostream>
using namespace std;

int main() {
	int n, Ma = 0, pos1=-1, pos2 = -1, men;
	cin >> n;
	for(int i=0;n != 0;i++) { 
		if(n>Ma){
			Ma = n;
			pos2 = i;
		}
		if(n<men){
			men = n;
			pos1 = i;
		}
		cin >> n;
	}	
	cout << "El menor es: " << men << endl;
	cout << "Posición: " << pos1+1 << endl;
	
	cout << "El Mayor es: " << Ma << endl;
	cout << "Posición: " << pos2+1 ;
	return 0;
}

