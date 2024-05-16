#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string Ape, Nom, DNI; 
	int Anios,CodigoEC, Hijos, CodigoPresent;
	
	float SB, Antiguedad, Presentismo, MP, SF, AJ, OS, AG, Haberes, Descuentos,Liquido;
	cout<< "Ingrese: Ape, Nom, DNI, MP: "<<endl;
	
	cin>> Ape>> Nom>> DNI>> MP;
	
	cout<< "Ingrese: SB, Anios, CodigoEC, Hijos, CodigoPresent: "<<endl;
	cin>> SB>> Anios>> CodigoEC>> Hijos>> CodigoPresent;
	Antiguedad = SB*Anios*0.012; 
	Presentismo = CodigoPresent * MP; 
	SF = CodigoEC*30+Hijos*40; 
	AJ = 0.11*SB; 
	OS = 0.03*SB;
	AG = 0.01*SB;
	Haberes = SB+Presentismo+SF+Antiguedad;
	Descuentos = AJ+OS+AG;
	Liquido = Haberes-Descuentos; 
	
	cout<< "Empleado: "<< Ape <<" "<< Nom << endl; 
	cout<< "DNI: "<< DNI << endl; 
	cout<< "Haberes:"<<endl; 
	cout<< "Basico: "<< SB <<endl; 
	cout<< "Antiguedad: "<< Antiguedad<<endl;
	cout<< "Salario Familiar: "<< SF<<endl; 
	cout<< "Descuentos"<<endl; 
	cout<< "Aporte Jubilatorio: "<< AJ<<endl;
	cout<< "Obra Social: "<< OS<<endl; 
	cout<< "Aporte gremial: "<< AG <<endl; 
	cout<< "Liquido a Cobrar: "<< Liquido<<endl; 
	return 0;
}

