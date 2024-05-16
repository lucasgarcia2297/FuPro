#include <iostream>
using namespace std;
int Fibonacci(int t);
int main(int argc, char *argv[]) {
	int t;
	cout << "ingrese el tamaño de la sucesión:";
	cin >>t;
	for (int i=1; i<=t; i++){
		cout<<Fibonacci(i) <<" ";
	}
	return 0;
}

int Fibonacci(int t) {
	if (t==0)
		return 0;
	else if (t==1)
			return 1;
	else 
		return Fibonacci(t-2)+Fibonacci(t-1);	
	}
	



