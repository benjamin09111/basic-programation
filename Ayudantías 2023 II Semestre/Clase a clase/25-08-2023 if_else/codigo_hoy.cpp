#include<iostream>
using namespace std;

int main (){
	int edad=0, dinero=0;
	string nombre="";
	bool mayorEdad = false;
	
	cout<<"Ingrese su nombre, edad y dinero: "<<endl;
	cin>>nombre;
	cin>>edad;
	cin>>dinero; //dinero que tiene que pagar

	if(edad >= 18){
		cout<<"Es mayor de edad."<<endl;
		
		mayorEdad = true;
		
	}else{
		cout<<"No es mayor de edad."<<endl;
	}
	
	int precio = 2250;
	int n;
	
	cout<<"Ingrese los n producto a comprar: "<<endl;
	cin>>n;
	
	dinero = n*2250;
	
	if(mayorEdad==true){
		dinero = dinero*0.84;
	}
	
	cout<<"a pagar: "<<dinero<<endl;
	
	if(dinero%2==0){
		cout<<"Es par."<<endl;
	}else{
		cout<<"Es impar."<<endl;
	}
	
	return 0;
}
