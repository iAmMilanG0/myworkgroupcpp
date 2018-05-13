#include <iostream>

using namespace std;

int main(){
	
	int n, i = 1;
	int sueldo, suma_sueldos = 0;
	int sueldo_medio = 0, sueldo_alto = 0;
	cout << "numero de empleados: ";
	cin >> n;
	while (i <= n){
		cout << "sueldo: ";
		cin >> sueldo;
		if (sueldo >= 100 and sueldo <= 300){
			sueldo_medio += 1;
		} else {
			sueldo_alto += 1;
		}
		suma_sueldos += sueldo;
		i += 1;
	}
	cout << "empledos con un sueldo medio: " << sueldo_medio << endl;
	cout << "empledos con un sueldo alto: " << sueldo_alto << endl;
	cout << "importe total en sueldos: " << suma_sueldos << endl;
	
	return 0;
}
