#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	/*
	int suma = 0;
	int valor;
	
	do {
		cout << "valor: ";
		cin >> valor;
		if (valor != 999){
			suma = suma + valor;
		}
	}while(valor != 999);
	
	cout << "la suma de los numeros ingresados es: ";
	cout << suma << endl;
	*/
	
	//===============================================================
	
	/*
	int numeroCuenta;
	int saldoActual;
	int sumaAcreedores = 0;
	
	do{
		cout << "numero de cuenta: ";
		cin >> numeroCuenta;
		if (numeroCuenta > 0){
			cout << "saldoActual: ";
			cin >> saldoActual;
			if (saldoActual > 0){
				sumaAcreedores += saldoActual;
				cout << "Acreedor" << endl;
			} else 
				if(saldoActual < 0){
					cout << "Deudor" << endl;
				} else 
					if (saldoActual == 0){
						cout << "Nulo" << endl; 
					}
		}
	}while(numeroCuenta > 0);
	cout << "el importe total de los acreedores es: ";
	cout << sumaAcreedores << endl;
	*/
	
	//*************** Cadena de caracteres mediante vectores *************************
	
	/*
	char mes1[10] = "Enero";
	char mes2[10] = "Febrero";
	
	cout << mes1 << endl;
	cout << mes2 << endl;
	*/
	
	//=========================================================
	
	/*
	char nombre[20];
	char apellido[20];
	
	cout << "nombre: ";
	cin.getline(nombre,20);
	cout << "apellido: ";
	cin.getline(apellido,20);
	
	cout << "Bienvenido " << nombre << " " << apellido << endl; 
	*/
	
	//==========================================================
	
	/*
	int n1,n2;
	cout << "tamaño de caracteres de la cadena 1: ";
	cin >> n1;
	cout << "tamaño de caracteres de la cadena 2: ";
	cin >> n2;
	*/
	
	/*
	char cadena1[12];
	char cadena2[12];
	
	cout << "cadena 1: ";
	cin.getline(cadena1,12);
	cout << "cadena 2: ";
	cin.getline(cadena2,12);
	
	//int i;
	//i = strcmp(cadena1,cadena2);
	
	if (strcmp(cadena1,cadena2) == 0){
		cout << "las cadenas son iguales" << endl;
	} else 
		if (strcmp(cadena1,cadena2) > 0){
			cout << "la cadena 1 es mayor alfabeticamente" << endl;
		} else {
			cout << "la cadena 2 es mayor alfabeticamente" << endl;
		}
	*/
	
	//===================================================================================
	
		
	return 0;
}
