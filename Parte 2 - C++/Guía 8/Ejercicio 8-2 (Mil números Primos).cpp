#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Mil Numeros Primos
int main(int argc, char *argv[]) {
	bool es_primo(int x);
	int n=1;
	int c=0;
	while (c<1000) {
		if (es_primo(n)){
		cout<<setw(4)<<n<<" ";
			c++;
		}
		n++;
	}
	return 0;
}

bool es_primo(int x){
	for(int i=2; i<x; i++){
		if (x%i==0){
			return 0;   //o return false
		}
	}	
	return 1; //o return true
}
	
