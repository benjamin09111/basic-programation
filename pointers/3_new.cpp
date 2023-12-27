#include<iostream>
using namespace std;

void fullArray(int array[5]){
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
}

int main (){
	int array[5];
	
	int *array2 = new int[5];
	
	for(int i=0; i<5; i++){
		cin>>array2[i];
	}
	
	cout<<array[0]<<endl;
	
	delete[] array2;
	
	return 0;
}
