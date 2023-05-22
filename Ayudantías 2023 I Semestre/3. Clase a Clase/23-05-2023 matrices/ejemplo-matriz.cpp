#include<iostream>
using namespace std;

int main (){
	
	int matriz[3][3] =
	{
		{1,2,3},
		{1,1,3},
		{1,2,1}
	};
	
	//filas
	for(int i=0; i<3; i++){
		//columnas
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	system("pause");
	system("cls");
	
	int k;
	
	cout<<"Amplificar matriz: "<<endl;
	cin>>k;
	
		for(int i=0; i<3; i++){
		//columnas
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]*k<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
}
