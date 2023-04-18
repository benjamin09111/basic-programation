#include<iostream>
using namespace std;

int main (){
	float precio_total=0;
	float cantidad=0;
	bool encendido=false;
	float ultimo=0;
	float ganancia_e=0;
	
	int opcion;
	
	while(true){
		system("cls");
		//es solo para visualizar mejor, no se evalua ni es necesario aprender.
		//igualmente con el system pause, es solo algo visual.
		//CLS: borra todo el contenido de la terminal. PAUSE: detiene el programa hasta apretar alguna tecla.
		
		cout<<"Bienvenido a la maquina de registro"<<endl;
		cout<<"1) Encender maquina."<<endl;
		cout<<"2) Agregar precio de producto."<<endl;
		cout<<"3) Mostrar precio acumulado."<<endl;
		cout<<"4) Mostrar ultimo precio ingresado."<<endl;
		cout<<"5) Mostrar ganancia especial."<<endl;
		cout<<"6) Apagar y salir."<<endl;
		
		cin>>opcion;
		
		if(opcion==6){
			if(encendido){ //lo mismo que poner encendido==true
				encendido = false;
			}
			break;
		}
		
		else if(opcion==1){
			system("cls");
			if(!encendido){ //lo mismo que poner encendido==false. El ! niega (invierte valor)
				encendido = true;
				cout<<"Maquina encendida."<<endl;
				
				
				system("pause");
			}else{
				cout<<"La maquina ya esta prendida."<<endl;
				
				system("pause");
			}
		}
		
		else if(opcion==2){
			system("cls");
			
			if(encendido){
				if(cantidad < 10){
				float test;
				cout<<"Ingrese el precio: "<<endl;
				cin>>test;
				
				if(test>0){
					ultimo = test;
					
					precio_total += ultimo;
				
					cantidad++;
				
					cout<<"Precio ingresado correctamente."<<endl;
				
					system("pause");			
				}else{
					cout<<"El precio debe ser mayor a cero."<<endl;
					system("pause");
				}
				
			}else{
				cout<<"La maquina llego a su tope."<<endl;
				
				system("pause");
			}
			
			
			}else{
				cout<<"Maquina apagada."<<endl;
				system("pause");
			}
			
			
		}
		else if(opcion==3){
			system("cls");
			
			if(encendido){
				cout<<"Precio total acumulado: "<<precio_total<<endl;
				cout<<"Cantidad de precios ingresados: "<<cantidad<<endl;
				system("pause");
			}else{
				cout<<"Maquina apagada."<<endl;
				system("pause");
			}
		}
		else if(opcion==4){
			system("cls");
			
			if(encendido){
				if(ultimo==0){
				cout<<"No se han ingresado precios."<<endl;
				
				system("pause");
			}else{
				cout<<"Ultimo precio ingresado: "<<ultimo<<endl;
				
				system("pause");
			}
			
			
			}else{
				cout<<"Maquina apagada."<<endl;
				system("pause");
			}
			
		}
		else if(opcion==5){
			system("cls");
			
			if(encendido){
				ganancia_e = (0.9*precio_total) * (cantidad/2);
				cout<<"La ganancia especial es: "<<ganancia_e<<endl;
				system("pause");
			}else{
				cout<<"Maquina apagada."<<endl;
				system("pause");
			}
		}
		
	}
	
	
	return 0;
}
