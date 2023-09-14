#include<iostream>
using namespace std;

//funciones

int getSuma( int a, int b ){
	//cualquier codigo
	return a+b;
}

void getSumaVoid(int a, int b){
	cout<<"La suma es: "<<a+b<<endl;
}

//ciclos

int main(){
	cout<< getSuma(10,5) <<endl;
	
	getSumaVoid(10,5);
	
	
	return 0;
}
