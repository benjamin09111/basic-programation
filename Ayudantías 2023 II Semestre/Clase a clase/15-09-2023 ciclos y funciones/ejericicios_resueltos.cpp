#include<iostream>
using namespace std;

//calcule promedio de N alumnos

float calcularPromedio(float n){
	float promedio=0;
	float nota;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese la nota "<<i+1<<": "<<endl;
		cin>>nota;
		
		promedio = promedio + nota;
	}
	
	return promedio/n;
}

//contador

void contador(){
	int numero;
	int pares=0, impares=0, negativos=0, positivos=0, total=0;
	
	while(true){
		cout<<"Ingrese un numero entero: "<<endl;
		cout<<"Presione 0 para salir."<<endl;
		cin>>numero;
		
		if(numero==0) {break;}
		
		total++;
		
		if(numero > 0){
			positivos++;
		}else{
			negativos++;
		}
		
		if(numero%2==0){
			pares++;
		}else{
			impares++;
		}	
		
	}
	
	cout<<"Pares: "<<pares<<endl;
	cout<<"Positivos: "<<positivos<<endl;
	cout<<"Impares: "<<impares<<endl;
	cout<<"Negativos: "<<negativos<<endl;
	cout<<"Ingresados: "<<total<<endl;
	
}

//referencia
void votar(int& a, int& b, int& c, int voto){
	if(voto==1){
		a++;
	}else if(voto==2){
		b++;
	}else if(voto==3){
		c++;
	}
}

int main(){
	int a = 0, b = 0, c = 0;
	
	votar(a,b,c,1);
	votar(a,b,c,2);
	votar(a,b,c,3);
	votar(a,b,c,2);
	votar(a,b,c,1);
	
	cout<<"a = "<<a<<" , b = "<<b<<" , c = "<<c<<endl;
	
	
	return 0;
}
