#include<iostream>
using namespace std;

void llenar(int *arreglo, int n){
	cout<<"Ingrese los datos:"<<endl;
	for(int i=0; i<3; i++){
		cin>>arreglo[i];
	}
}


int main (){
	int arreglo[3];
	
	llenar(arreglo, 3);
	
	cout<<"Mostrando: "<<endl;
	for(int i=0; i<3; i++){
		cout<<arreglo[i]<<endl;
	}

	return 0;
}
