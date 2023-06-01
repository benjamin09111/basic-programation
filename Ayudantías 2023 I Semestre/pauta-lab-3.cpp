#include<iostream>
using namespace std;

int main (){
	
	//1
	int matriz[3][3] = 
	{
		{550,800,700},
		{600,800,700},
		{600,700,800}
	};
	
	//2
	int vendidos_mes[3], suma;
	
	for(int i=0; i<3; i++){
		suma = 0;
		for(int j=0; j<3; j++){
			suma = suma + matriz[i][j];
		}
		
		vendidos_mes[i] = suma;
	}
	
	//3
	int referencia = 0, pos = 0;
	
	for(int i=0; i<3; i++){
		if(referencia<=vendidos_mes[i]){
			referencia = vendidos_mes[i];
			pos = i;
		}
	}
	
	cout<<"El mes con mayor cantidad de ventas es "<<pos+1<<endl<<endl;
	
	//4
	int precios_mes[3];
	
	for(int i=0; i<3; i++){
		cout<<"Digite precio de los videojuegos en el mes "<<i+1<<": "<<endl;
		cin>>precios_mes[i];
	}
	
	//5 en esta parte es posible usar un arreglo que guarde las ganancias por mes
	//sin embargo, puede hacerse solamente imprimiendo
	int ganancia_mes[3], ganancia=0;
	for(int i=0; i<3; i++){
		ganancia = precios_mes[i]*vendidos_mes[i];
		
		ganancia_mes[i] = ganancia;
		
		cout<<"La ganancia del mes "<<i+1<<" es de "<<ganancia<<endl;
	}
	
	//6 si se creaba el arreglo anterior, se realiza de la siguiente manera:
	for(int i=0; i<3; i++){
		if(ganancia_mes[i]>2000000){
			cout<<"El mes "<<i+1<<" ha vendido mas de 2mill."<<endl;
		}
	}
	
	return 0;
}
