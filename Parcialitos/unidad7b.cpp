#include <iostream>
using namespace std;

/** ==== Cuando desee verificar si solución es correcta descomente 
         la siguiente línea (#include "unidad7b.ofu") ==== **/
#include "unidad7b.ofu"

// Una máquina para fabricar tornillo cada tanto genera tornillos defectuosos, 
// donde las longitudes no son correctas. La longitud de un tornillo debe estar
// entre 9cm y 13cm. El programa debe permitir ingresar todas las longitudes de 
// los n tornillos generados y contar cuantos son correctos y cuantos defectuosos.
int main() {

	int n, cant_defectuosos=0, cant_correctos=0;
	float medidas;
	cout << "Ingrese la cantidad de tornillos fabricados: ";
	cin >> n;
	cout << "Ingrese las medidas de los " << n << " tornillos: " << endl;
	for(int i=0; i<n; i++){
		cin>>medidas;
		if ((medidas>=9) && (medidas<=13)){
			cant_correctos++;
		} else {
			cant_defectuosos++;
		}
	}
	/// CODIFIQUE AQUÍ la parte que falta del programa:
	///    - Leer las n medidas, contar cuantas están entre 9 y 13 cm, 
	///      y cuantos no, y guadar esas cantidades en las variables
	///      cant_correctos y cant_defectuosos respectivamente.
	
	
	/** ==== NO modifique nada del main DESPUES de esta línea ==== **/
	cout << "Tornillos correctos:   " << cant_correctos << endl; 
	cout << "Tornillos defectuosos: " << cant_defectuosos << endl; 
	
	return 0;
}

