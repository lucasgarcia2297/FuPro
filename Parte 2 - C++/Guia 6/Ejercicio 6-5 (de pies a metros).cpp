#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float N, pies;
	pies = 0.3048;
	cout<<"Valor en pies: ";
	cin>>N;
	N = N*pies;
	
	cout<<"Valor en metros: "<< N;
	return 0;
}

