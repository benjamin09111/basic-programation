#include<iostream>
using namespace std;

void llenarPromedios(float* promedios, int n){
	for(int i=0; i<n; i++){
		cout<<"Ingrese nota "<<i+1<<": "<<endl;
		cin>>promedios[i];
	}
}

int main (){
	float* promedios;
	int n;
	
	cout<<"Ingrese la cantidad de promedios (min 2): "<<endl;
	cin>>n;
	
	promedios = new float[n];
	
	llenarPromedios(promedios, n);
	
	for(int i=0; i<n; i++){
		cout<<promedios[i]<<" ";
	}
	
	cout<<"_________________________"<<endl;
	
	cout<<"Podemos hacer referencia al primer elemento: "<<*promedios<<endl;
	
	//avanzar en una posicion al puntero
	promedios++;
	
	cout<<"Y al siguiente: "<<*promedios<<endl;
	
	delete[] promedios;
	return 0;
}
