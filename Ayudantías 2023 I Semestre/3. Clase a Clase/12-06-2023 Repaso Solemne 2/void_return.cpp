#include<iostream>
using namespace std;

/*
	una funcion que reciba 3 notas y calcule el promedio.
	otra funcion que imprima el arreglo de promedios.
*/

float obtenerPromedio(float a, float b, float c){
	return (a+b+c)/3;
}

void imprimirPromedios(float promedios[], int n){
	cout<<"___PROMEDIOS___"<<endl;
	for(int i=0; i<n; i++){
		cout<<promedios[i]<<endl;
	}
}

int main (){
	
	int n;
	float a,b,c;
	
	cout<<"Ingrese los n alumnos: "<<endl;
	cin>>n;
	
	float promedios[n];
	
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese la nota 1: "<<endl;
		cin>>a;
		cout<<"Ingrese la nota 2: "<<endl;
		cin>>b;
		cout<<"Ingrese la nota 3: "<<endl;
		cin>>c;
		
		promedios[i] = obtenerPromedio(a,b,c);
	}
	
	imprimirPromedios(promedios,n);
	
	return 0;
}
