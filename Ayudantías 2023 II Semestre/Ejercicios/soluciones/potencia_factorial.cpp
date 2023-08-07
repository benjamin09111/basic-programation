#include<iostream>
using namespace std;

int main(){
	int exponente=3, base=2,resultado_potencia=1;
	
	for(int i=0; i<exponente; i++){
		resultado_potencia = resultado_potencia * base;
	}
	
	cout << "El resultado (potencia) es: "<< resultado_potencia <<endl;

	int factorial = 5, resultado_factorial=1;
	
	//puede hacerse al reves, del 1 al dato.
	for(int i=factorial; i>=1; i--){
		resultado_factorial = resultado_factorial*i;
	}
	
	cout << "Resultado del factorial es: "<< resultado_factorial << endl;
	
	return 0;
}
