#include<iostream>
using namespace std;

int main (){
	
	int opcion;
	
	while(true){
		cout<<"Bienvenido!"<<endl;
		cout<<"1) Ingresar y mostrar nombre y edad."<<endl;
		cout<<"2) Calcular promedio."<<endl;
		cout<<"3) Calcular potencia."<<endl;
		cout<<"4) Salir."<<endl;
		cin>>opcion;
		
		string nombre="";
		int edad=-1;
		
		switch(opcion){
			
			case 1:
				{
					cout<<"Ingrese su nombre: "<<endl;
					cin>>nombre;
					cout<<"Ingrese su edad: "<<endl;
					cin>>edad;
					
					cout<<"Nombre: "<<nombre<<endl;
					cout<<"Edad: "<<edad<<endl;
					
					break;
				}
				
			case 2:
				{
					float promedio, nota;
					int n;
				
					cout<<"Ingrese la cantidad de notas: "<<endl;
					cin>>n;
				
					for(int i=0; i<n; i++){
						cout<<"Ingrese la nota"<<i+1<<": "<<endl;
						cin>>nota;
					
						promedio = promedio + nota;
					}
				
					cout<<"El promedio es: "<<promedio/n<<endl;
				
					break;
				}
				
			case 3:
				
				{
					int base, exponente, potencia=1;
				
					cout<<"Ingrese la base: "<<endl;
					cin>>base;
				
					cout<<"Ingrese el exponente: "<<endl;
					cin>>exponente;
				
					for(int i=0; i<exponente; i++){
					
						potencia = potencia * base;
					
					}
				
					cout<<"Resultado: "<<potencia<<endl;
				
					break;
				}
				
			case 4: return 0;
				
			default: cout<<"Mal ingresado."<<endl;
			
		}
	}
	
	
	return 0;
}
