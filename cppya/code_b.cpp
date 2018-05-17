#include <iostream>

using namespace std;

int main(){
	/*	
	int i, suma = 0;
	int valor;
	int promedio;
	for (i=0; i<10; i++){
		cout << "valor: ";
		cin >> valor;
		suma = suma + valor; 
	}
	promedio = suma / i;
	cout << "la suma de los valore es: " << suma << endl;
	cout << "el promedio de los valores es: " << promedio << endl;
	*/
	
	//============================================================
	
	/*
	int numero, i;
	int valor;
	int cantidad = 0;
	cout << "ingrese valore a calcular: ";
	cin >> numero;
	for (i=0; i<numero; i++){
		cout << "valor: ";
		cin >> valor;
		if (valor >= 1000){
			cantidad += 1;
		}
	}
	cout << "cantidad de valores mayores o iguales a 1000: " << cantidad << endl;
	*/
	
	//==========================================================
	
	/*
	int valor, i;
	int suma = 0;
	for (i=0; i<10; i++){
		cout << "valor: ";
		cin >> valor;
		if (i >= 5){
			suma += valor;
		} 
	}
	cout << "la suma de los ultimos cinco valores es: " << suma << endl;
	*/
	
	//===============================================================
	
	/*
	int i;
	for (i=5; i<=50; i+=5){
		cout << i << endl;
	}
	*/
	
	//=============================================================
	
	/*
	int numero, i;
	cout << "ingrese numero a multiplicarlo: ";
	cin >> numero;
	for (i=numero; i<=(numero*12); i+=numero){
		cout << i << endl;
	}
	*/
	
	//================================================================
	
	/*
	int valor;
	cout << "ingrese valor entre 0 y 999: ";
	cin >> valor;
	do {
		if(valor <= 9){
			cout << "el numero tiene un digito" << endl;
		} else 
			if (valor <= 99){
			cout << "el numero tiene dos digitos" << endl;
		} else 
			if (valor <= 999){
			cout << "el numero tiene tres digitos" << endl;
		}
		cout << "ingrese valor entre 0 y 999: ";
		cin >> valor;
	}while(valor > 0);
	*/
	
	//===============================================================
	
	/*
	int suma = 0;
	int i = 0;
	int valor;
	cout << "valor: ";
	cin >> valor;
	do {
		suma += valor;
		i += 1;
		cout << "valor: ";
		cin >> valor;
	}while(valor > 0);
	int promedio;
	promedio = suma / i;
	cout << "el promedio de los numeros ingresados es: " << promedio << endl;
	cout << "ultimo numero a contar: " << i << endl;
	*/
	
	//=====================================================================
	
	//return 0;
}
