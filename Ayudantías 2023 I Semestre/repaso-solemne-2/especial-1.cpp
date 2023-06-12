#include<iostream>
using namespace std;

/*
Un programa se encarga de realizar el 
recuento de numeros pares, impares 
mediante puntajes.
Para eso, cada numero ingresado se
evalua. 

Si el numero es par, el puntaje de pares
se aumenta en 2.

Si el numero es impar, el puntaje de impares
se aumenta en 1.

Cree una función extra para
imprimir los datos y mostrar el ganador.

*/

void contar(int numero, int& p_pares, int& p_impares){
	if(numero%2==0){
		p_pares = p_pares + 2;
	}else{
		p_impares++;
	}
}

void resultado(int p_pares, int p_impares){
	if(p_pares > p_impares){
		cout<<"Los pares ganan con "<<p_pares<<" puntos."<<endl;
	}else{
		cout<<"Los impares ganan con "<<p_impares<<" puntos."<<endl;
	}
}

int main (){

	return 0;
}
