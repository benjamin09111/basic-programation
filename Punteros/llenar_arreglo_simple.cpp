#include<iostream>
using namespace std;

void llenarArreglo(int arreglo[10]){
	for(int i=0; i<10; i++){
		arreglo[i] = i+1;
	}
}

int main(){
	int arreglo[10];
	
	llenarArreglo(arreglo);
	
	for(int i=0; i<10; i++){
		cout<<arreglo[i]<<" ";
	}
	
	return 0;
}
