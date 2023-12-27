#include<iostream>
using namespace std;



int main (){
	/*
	new: permite usar memoria en el heap y
	almacenar memoria mucho más grande e
	irrepetidamente, usando toda la memoria
	disponible en el ordenador.
	*/
	int* p_array = new int[10]; //puntero a primera posicion
	
	*p_array = 1;
	
	p_array[3] = 4; // lo mismo que */(p_array + 3) = 4
	
	return 0;
}
