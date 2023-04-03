#include<iostream>
using namespace std;

int main(){
	int numero;
	string nombre;
	int edad;
	
	cout << "Ingrese una opcion:  " << endl;
	
	cout << "1) Saludar."<<endl;
	cout << "2) Despedirse."<<endl;
	
	cin >> numero;
	
	//solo lo utilizaremos con numeros (case 1, case 2, case 3...)
	//las opciones son el numero que ingresa, no van condiciones como if/else
	
	switch(numero){
		case 1:
			cout <<"Hola!";
			
			cout <<" Como te llamas?"<<endl;
			cin>>nombre;
			
			cout <<"Cual es tu edad "<<nombre<<"?"<<endl;
			cin>>edad;
			
			if(edad>=18){
				cout<<"Eres mayor de edad."<<endl;
			}else{
				cout<<"Eres menor de edad."<<endl;
			}
			
			break;
			
			
		case 2:
			cout <<"Adios!"<<endl;
			break;
			
		default:
			cout <<"No he entendido lo que has digitado."<<endl;
			break;
		
	}
	
	return 0;
}
