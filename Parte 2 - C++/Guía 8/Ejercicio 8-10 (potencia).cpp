#include <iostream>
using namespace std;
int potencia(int base, int exp);
int main(int argc, char *argv[]) {
	int base, exp;
	cout<<"valor de la base:"<<endl;
	cin>>base;
	cout<<"valor del exponente:"<<endl;
	cin>>exp;
	cout<<potencia(base, exp);
	return 0;
}

int potencia(int base, int exp)
{	if (exp ==0)
		return 1;
	else {
	if (exp %2 ==0)	
	return potencia(base,exp/2)*potencia(base,exp/2);
	else {
		return base*potencia(base, exp-1);
	}
}
}
