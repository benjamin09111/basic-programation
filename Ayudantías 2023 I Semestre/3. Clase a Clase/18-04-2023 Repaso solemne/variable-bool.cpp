#include<iostream>
using namespace std;

int main (){
	
	//escribir false es lo mismo que escribir un 0.
	//escribir true es lo mismo que escribir un 1.
	
	bool logico = false;
	
	cout<<"Antes del cambio: "<<endl;
	cout<<logico<<endl;
	
	logico = 1;
	
	if(logico){
		cout<<"\nLuego del cambio:\nEl valor es verdadero."<<endl;
	}
	
	return 0;
}
