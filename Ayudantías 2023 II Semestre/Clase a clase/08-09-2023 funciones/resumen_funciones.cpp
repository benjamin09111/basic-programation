#include<iostream>
using namespace std;

//RESUMEN DE FUNCIONES


//void: no retorna. Usadas para imprimir por pantalla.

void nombreFuncion(){
	cout<<"Hola!"<<endl;
}

//retorno

int getSuma(int parametro1, int parametro2){
	return parametro1+parametro2;
}





/*
0. Cree una función que salude a un usuario.
1. Crear una función que retorne el promedio de tres notas.
2. Crear una función que calcule el número menor entre tres números.
3. Crear una función que entregue falso o verdadero como comparador.
4. Cree una función que reciba un número e indique si es par o no.
5. Cree una función que recibe un precio y calcula un descuento por pantalla.
*/

int main (){
	//void siempre se llama sola
	nombreFuncion();
	//retorna llamar
	int suma = getSuma(5,8);
	cout<<getSuma(5,8)<<endl;
	
	
	
	return 0;
}
