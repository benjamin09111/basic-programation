#include<iostream>
using namespace std;

/*
0. Cree una función que salude a un usuario.
1. Crear una función que retorne el promedio de tres notas.
2. Crear una función que calcule el número menor entre tres números.
3. Crear una función que entregue falso o verdadero como comparador.
4. Cree una función que reciba un número e indique si es par o no.
5. Cree una función que recibe un precio y calcula un descuento por pantalla.
*/

void saludar(string nombre){
	cout<<"Hola "<<nombre<<endl;
}

float getPromedio(float n1, float n2, float n3){
	float promedio = (n1+n2+n3)/3;
	
	return promedio;
}

int obtenerMenor(int n1, int n2, int n3){
	if(n1 < n2 && n1 < n3){
		return n1;
	}else if(n2 < n1 && n2 < n3){
		return n2;
	}else{
		return n3;
	}
	//siempre debe retornar algo en cualquier caso.
}

bool comparator(int n1, int n2){
	//si el primero es mayor, retorno verdadero. Sino, falso.
	if(n1 > n2){
		return true;
	}else{
		return false;
	}
}

bool esPar(int numero){
	if(numero%2==0){
		return true;
	}else{
		return false;
	}
}

float obtenerPrecioDescontado(float precio, float descuento){
	//el usuario ingresa un numero de descuento.
	//precio = 5000, descuento = 10%
	
	float precio_nuevo = precio - (precio* (descuento/100) );
	
	return precio_nuevo;	
}

//misma funcion pero con void
void descuento(){
	float precio, descuento;
	
	cout<<"Ingrese el precio: "<<endl;
	cin>>precio;
	cout<<"Ingrese el descuento (numero entero): "<<endl;
	cin>>descuento;
	
	float precio_nuevo = precio - (precio* (descuento/100) );
	
	cout<<"El precio nuevo es: "<<precio_nuevo<<endl;	
}

void descuento2(float precio){
	float descuento;
	cout<<"Ingrese el descuento (numero entero): "<<endl;
	cin>>descuento;
	
	float precio_nuevo = precio - (precio* (descuento/100) );
	
	cout<<"El precio nuevo es: "<<precio_nuevo<<endl;	
}

int main (){
	//llamar a la funcion de obtener precio.
	float precio, descuento;
	
	cout<<"Ingrese el precio: "<<endl;
	cin>>precio;
	cout<<"Ingrese el descuento (numero entero): "<<endl;
	cin>>descuento;
	
	cout<< "El nuevo precio es: "
	<< obtenerPrecioDescontado(precio,descuento)
	<<endl;
	
	return 0;
}
