#include<iostream>
using namespace std;

/*
	Cree un programa que permita obtener los
	porcentajes de cierto producto segun el inventario.
	
	Para ello, cree la función que recibe un
	arreglo de la cantidad de cada producto.
	Debe consultar las cantidades.
	Para cada uno, muestre el porcentaje segun el
	inventario.
	
	Ademas, para calcular el costo de ganancia
	es el porcentaje por *150. Imprima en la misma
	función eso.
*/

void porcentaje(int productos[5], int inventario){
	for(int i=0; i<5; i++){
		cin>>productos[i];
	}
	//   inventario --> 100%
	//   i           -> ?
	for(int i=0; i<5; i++){
		cout<<"Porcentaje: "<< (productos[i]*100) / inventario <<"%"<<endl;
	}
}

int main (){
	return 0;
}
