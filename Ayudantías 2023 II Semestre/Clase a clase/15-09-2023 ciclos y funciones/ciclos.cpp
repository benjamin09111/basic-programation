#include<iostream>
using namespace std;

int main (){
	//for: sabemos la cantidad de repeticiones -> N
	int n = 15;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<endl;
	}

	//while: no sabemos cuantas veces se repite
	int i = 10;
	
	cout<<endl;
	
	while(i < 20){
		cout<<"Hola"<<endl;
		i = i+2; //5 veces
	}
	
	
	
	return 0;
}
