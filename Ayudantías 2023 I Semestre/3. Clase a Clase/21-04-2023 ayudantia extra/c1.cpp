#include<iostream>
using namespace std;

int main (){
	
	//usuario ingresa codigo de 4 digitos _ _ _ _
	
	int codigo;
	int c1,c2,c3;
	
	while(true){
		
		cout<<"Ingrese el codigo: "<<endl;
		cin>>codigo;	
		
		if(codigo==-1){
			break;
		}
		
		//modulo me pasa lo de la derecha de la coma, division la izq
		
		//dos primeros
		c1 = codigo/100;
		//penultimo
		c2 = (codigo%100) / 10;
		//ultimo
		c3 = codigo%10;
		
		cout<<"El resultado es: "<<c1+c2+c3<<endl;
	}
	
	
	return 0;
}
