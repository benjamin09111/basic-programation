#include<iostream>
using namespace std;

/*
Un doctor almacena las cantidades pendientes de sesiones
con sus pacientes. El doctor posee cinco pacientes.
Pida por pantalla que ingrese las sesiones restantes
de cada uno. Se le pide:

- Muestre cuántos pacientes le faltan más de 5 sesiones.
Muestre cuántos pacientesle faltan menos de 3 sesiones.
Además muestre la cantidad de pacientes que no le faltan
sesiones.

- Pida por pantalla una posición y disminuya la sesión en uno.
Si llega a cero, muestre por pantalla que el paciente está
dado de alta.
*/

int main(){
	//variables
	int opc;
	
	cout<<"Bienvenido, registre las sesiones: "<<endl;
	
	//codigo para registrar arreglo de sesiones (tamanio 5).
	
	while(true){
		
		cout<<"***AGENDA DOCTOR***"<<endl;
		cout<<"1) Ver sesiones restantes de pacientes."<<endl;
		cout<<"2) Disminuir sesiones segun posicion."<<endl;
		cout<<"3) Obtener informacion sobre pacientes."<<endl;
		cout<<"4) Salir."<<endl;
		cin>>opc;
		
		if(opc==4) break;
	
		//mostrar sesiones restantes
		if(opc==1){
			
		}
		
		//restar sesiones
		if(opc==2){
			
		}
		
		//obtener informacion: mayores a 5, menores a 3.
		//saber cuantos pacientes ya no les faltan sesiones.
		if(opc==3){
			
		}
		
	}
	
	
	return 0;
}
