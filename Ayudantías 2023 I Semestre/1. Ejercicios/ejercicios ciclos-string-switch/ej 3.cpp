#include<iostream>
using namespace std;

int main (){
	string codigo;
	int precio;

	/* UTILIZANDO DO WHILE
		do{
		cout<<"Ingrese el codigo del producto: "<<endl;
		cin>>codigo;
		
		cout<<"Ingrese el precio del producto "<<codigo<<": "<<endl;
		cin>>precio;

		if(precio>=5000){
			cout<<"Precio: "<<precio*0.8<<endl;
		}else if(precio>2000){
			cout<<"Precio: "<<precio*0.85<<endl;
		}else if(precio<=2000 && precio>= 0){
			cout<<"Precio: "<<precio*0.9<<endl;
		}
		
	}while(precio!=-1);
	*/
	
	/* UTILIZANDO BREAK
	
	while(true){
		
		cout<<"Ingrese el codigo del producto: "<<endl;
		cin>>codigo;
		
		cout<<"Ingrese el precio del producto "<<codigo<<": "<<endl;
		cin>>precio;
		
		if(precio==-1){
			break;
		}
		
		if(precio>=5000){
			cout<<"Precio: "<<precio*0.8<<endl;
		}else if(precio>2000){
			cout<<"Precio: "<<precio*0.85<<endl;
		}else if(precio<=2000 && precio>= 0){
			cout<<"Precio: "<<precio*0.9<<endl;
		}
		
	}
	*/
	
	/* SIN UTILIZAR BREAK
	
	while(precio != -1){
		
		cout<<"Ingrese el codigo del producto: "<<endl;
		cin>>codigo;
		
		cout<<"Ingrese el precio del producto "<<codigo<<": "<<endl;
		cin>>precio;
		
		if(precio>=5000){
			cout<<"Precio: "<<precio*0.8<<endl;
		}else if(precio>2000){
			cout<<"Precio: "<<precio*0.85<<endl;
		}else if(precio<=2000 && precio>= 0){
			cout<<"Precio: "<<precio*0.9<<endl;
		}
	}
	*/
	
	return 0;
}
