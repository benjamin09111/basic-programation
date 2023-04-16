#include<iostream>
using namespace std;

int main (){
	
	//calcular el promedio del curso segun las notas de n alumnos: 
	
	int n;
	float promedio;
	float p_final=0;
	
	cout<<"Ingrese la cantidad de alumnos: "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el promedio del alumno "<<i+1<<": "<<endl;
		cin>>promedio;
		p_final = p_final + promedio;
	}
	
	cout<<"El promedio final del curso es: "<<p_final/n<<endl;
	
	return 0;
}
