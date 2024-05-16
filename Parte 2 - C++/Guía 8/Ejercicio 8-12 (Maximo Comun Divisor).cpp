#include <iostream>
using namespace std;
int MCD(int a,int b);
int main(int argc, char *argv[]) {
	int a, b;
	cin>>a;
	cin>>b;
	cout<<MCD(a,b);
	return 0;
}

int MCD(int a, int b){
cout<<a<<"        "<<b<<endl;
	if (a<b)
		return MCD(a, b-a) ;
	else {
			if (a>b)
			return MCD(a-b,b);
			else 
				return a;
		}
}
