#include<iostream>
using namespace std;

//cada alumno tiene 3 notas. Y son n alumnos.
int main (){
	float n1,n2,n3;
	string nombre;
	float promedio=0;
	int n;
	
	cout<<"Ingrese la cantidad de alumnos: "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Nombre del alumno: "<<endl;
		cin>>nombre;
		
		cout<<"Nota 1: "<<endl;
		cin>>n1;
		cout<<"Nota 2: "<<endl;
		cin>>n2;
		cout<<"Nota 3: "<<endl;
		cin>>n3;
		
		promedio = (n1+n2+n3)/3;
		
		cout<<"El promedio del alumno "<<nombre<<" es "<<promedio<<endl;	
	}
	
	return 0;
}
