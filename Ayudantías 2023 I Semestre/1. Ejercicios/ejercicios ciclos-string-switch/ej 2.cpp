#include<iostream>
using namespace std;

int main (){
	
	int opcion;
	
	while(true){
		system("cls");
		
		cout<<"1) Calcular potencia."<<endl;
		cout<<"2) Mostrar n numeros al reves."<<endl;
		cout<<"3) Salir."<<endl;
		
		cin>>opcion;
		
		switch(opcion){
			case 1:{
				
				int base, exponente, potencia=1;
				cout<<"Ingrese la base: "<<endl;
				cin>>base;
				cout<<"Ingrese el exponente: "<<endl;
				cin>>exponente;
				
				for(int i=0; i<exponente; i++){
					potencia = potencia * base;
				}
				
				cout<<"La potencia es: "<<potencia<<endl;
				
				system("pause");
				
				break;
			}
			case 2:{
				int n;
				cout<<"Ingrese la cantidad maxima de numeros (n): "<<endl;
				cin>>n;
				
				//n= 10 -> 10  8  6  4  2 
				
				for(int i=n; i>=1; i=i-2){
					cout<<i<<" ";
				}
				
				system("pause");
				
				break;
			}
			
			case 3:{return 0;}
			
			default:{
				cout<<"Mal ingresado."<<endl;
				system("pause");
				break;
			}
		}
		
	}
}
