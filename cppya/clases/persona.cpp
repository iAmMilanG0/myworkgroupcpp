#include <iostream>
#include <string.h>

using namespace std;

class Persona{
	private:
		char nombre[20];
		char apellido[20];
		int edad;
	public:
		void inicializarDatos();
		void mostrarDatos();
		void verificarEdad();
};

void Persona::inicializarDatos(){
	cout << "ingrese nombre: ";
	cin.getline(nombre,20);
	cout << "ingrese apellido: ";
	cin.getline(apellido,20);
	cout << "ingrese edad: ";
	cin >> edad;
}

void Persona::mostrarDatos(){
	cout << "nombre: "   << nombre << endl;
	cout << "apellido: " << apellido << endl;
	cout << "edad: "     << edad << endl;
}

void Persona::verificarEdad(){
	if (edad >= 18){
		cout << nombre << " es mayor de edad" << endl;
	} else {
		cout << nombre << " usted es menor de edad" << endl;
	}
}

int main(){
	
	Persona persona1;
	persona1.inicializarDatos();
	persona1.mostrarDatos();
	persona1.verificarEdad();
	/*
	cout << "==============================\n";
	Persona persona2;
	persona2.inicializarDatos();
	persona2.mostrarDatos();
	persona2.verificarEdad();
	*/
	
	
	return 0;
}
