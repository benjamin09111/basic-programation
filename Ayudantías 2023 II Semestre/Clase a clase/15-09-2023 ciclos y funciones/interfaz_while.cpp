#include<iostream>
using namespace std;

int main(){
	int opcion;
	
	while(true){
		system("cls"); //opcional
		
		cout<<"BIENVENIDO"<<endl;
		cout<<"Aprete 0 para salir"<<endl;
		cin>>opcion;
		
		if(opcion==0){
			break; //permite salirme del ciclo actual
		}else{
			cout<<"Gracias!"<<endl;
			
			system("pause"); //opcional
		}
		
	}
	
	return 0;
}
