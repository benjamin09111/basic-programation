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
0. Cree una funci�n que salude a un usuario.
1. Crear una funci�n que retorne el promedio de tres notas.
2. Crear una funci�n que calcule el n�mero menor entre tres n�meros.
3. Crear una funci�n que entregue falso o verdadero como comparador.
4. Cree una funci�n que reciba un n�mero e indique si es par o no.
5. Cree una funci�n que recibe un precio y calcula un descuento por pantalla.
*/

int main (){
	//void siempre se llama sola
	nombreFuncion();
	//retorna llamar
	int suma = getSuma(5,8);
	cout<<getSuma(5,8)<<endl;
	
	
	
	return 0;
}
