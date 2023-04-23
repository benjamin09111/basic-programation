#include<iostream>
using namespace std;

int main (){
	
	int edad, salario;
	
	for(int i=0; i<5; i++){
		
		cout<<"Ingrese su edad: "<<endl;
		cin>>edad;
		
		cout<<"Ingrese lo que gana por mes: "<<endl;
		cin>>salario;
		
		if(edad >= 18){
			if(salario>5000){
				cout<<"Pertenece al grupo A."<<endl;
			}else if(salario>2500){
				cout<<"Pertenece al grupo C."<<endl;
			}else{
				cout<<"No pertenece a ningun grupo."<<endl;
			}
			
		}else if(edad < 18 && edad >=0){
			
			cout<<"Pertenece al grupo B."<<endl;
			
		}else{
			
			//por si ingresanumero negativo
			cout<<"Edad mal ingresada."<<endl;
		}
		
	}
	
	
	return 0;
}
