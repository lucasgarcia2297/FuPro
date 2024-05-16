#include <iostream> 
#include <iomanip> 
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	float a,b,c,x1,x2,x,dis; 
	
	cout<<"Ingrese A= "; 
	cin>>a; 
	
	cout<<"Ingrese B= "; 
	cin>>b; 
	
	cout<<"Ingrese C= "; 
	cin>>c; 
	
	x= pow(b,2)-(4*a*c); 
	dis = sqrt(x); 
	x1 = (-b+dis)/(2*a); 
	x2 = (-b-dis)/(2*a); 
	
	cout<<"X1= "<<x1<<endl; 
	cout<<"X2= "<<x2<<endl; 

	return 0;	

}

