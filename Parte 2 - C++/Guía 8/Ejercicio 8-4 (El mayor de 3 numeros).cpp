#include <iostream>
using namespace std;

int Mayor(int n1, int n2, int n3=0);

int main(int argc, char *argv[]) {
	cout<<"El mayor es: "<<Mayor(126, 26, 645);
}
int Mayor(int n1, int n2, int n3){
	int Mayor;
	if ((n1>n2) && (n1>n3)){
		return n1;
	} else
		if (n2>n3)
			return n2;
		else
			return n3;
	return Mayor;
}



