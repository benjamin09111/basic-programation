#include<iostream>
using namespace std;

/*
En general, se recomienda utilizar la referencia para evitar errores.
Pueden haber veces que sea necesario usar el puntero.
*/

//podemos alterar su valor conociendo su direccion en memoria
void cambiarValorConPuntero( int *direction ){
	//lo que esta dentro de la direccion sera igual a 10
	*direction = 10;
}

//podemos alterar su valor recibiendo directamente la variable original
void cambiarValorReferencia( int &variable ){
	//lo que esta dentro de la direccion sera igual a 20
	variable = 20;
}

int main (){
	//variable original a modificar
	int a = 5;
	
	//obtenemos la direccion en memoria de la variable
	int *direction = &a;
	
	cout << "Variable original: " << a <<endl;
	cout << "Direccion en memoria de variable: " << &a <<endl;
	cout << "Direccion en memoria apuntada por el puntero: " << direction <<endl;
	cout << "Valor de lo que apunta el puntero: " << *direction <<endl;
	cout << "Direccion en memoria del puntero: " << &direction <<endl;
	
	cout << "\n\nAplicando funcion con puntero: "<<endl;
	
	//le pasamos direccion
	cambiarValorConPuntero(direction);
	
	cout << "Variable: "<< a <<endl;
	
	cout << "\n\nAplicando funcion con referencia: "<<endl;
	
	//le pasamos la referencia
	cambiarValorReferencia(a);
	
	cout << "Variable: "<< a <<endl;	
	
	cout << "\n\n\nVariable original: " << a <<endl;
	cout << "Direccion en memoria de variable: " << &a <<endl;
	cout << "Direccion en memoria apuntada por el puntero: " << direction <<endl;
	cout << "Valor de lo que apunta el puntero: " << *direction <<endl;
	cout << "Direccion en memoria del puntero: " << &direction <<endl;
	
	return 0;
}
