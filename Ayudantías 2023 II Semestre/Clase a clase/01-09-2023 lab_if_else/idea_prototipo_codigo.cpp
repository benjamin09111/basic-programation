#include<iostream>
using namespace std;

/*
Hecho de manera rapida. Prototipo, orden y logica.
Puede que no compile XD
*/

int main (){
	int demanda;
	int stock;
	int fabricar; //cantidad a fabricar
	int i1,i2,i3; //ingredientes, lo que vale cada ingrediente
	int precio_venta; //a lo que se vende el producto
	int juntar; //costo por juntar
	bool se_hacen; //si es que se fabrican o no es necesario
	int costo, ganancia, beneficio;
	int gasto_producto; //el costo por un solo producto
	int ganancia_esperada; //ganancia esperada por la empresa
	
	cout<<"Ingrese los siguientes datos: "<<endl;
	cout<<"Demanda del dia (cantidad de alimentos): "<<endl;
	cin>>demanda;
	
	if(demanda <= 0){
		cout<<"Mal ingresado."<<endl;
		return 0;
	}
	
	cout<<"Stock que se tiene del alimento: "<<endl;
	cin>>stock;
	
	if(demanda < 0){
		cout<<"Mal ingresado."<<endl;
		return 0;
	}
	
	cout<<"Precio a vender cada alimento: "<<endl;
	cin>>precio;
	
	if(precio <= 0){
		cout<<"Mal ingresado."<<endl;
		return 0;
	}
	
	if(demanda - stock <= 0){
		se_hacen = false;
	}else{
		se_hacen = true;
	}
	
	
if(se_hacen){	
	fabricar = demanda - stock;
	
	cout<<"Alimentos a fabricar: "<<fabricar<<endl;
	
	cout<<"Precio de ingrediente 1: "<<endl;
	cin>>i1;
	cout<<"Precio de ingrediente 2: "<<endl;
	cin>>i2;
	cout<<"Precio de ingrediente 3: "<<endl;
	cin>>i3;
	
	if(i1 < 0 || i2 < 0 || i3 < 0){
		cout<<"Mal ingresado. No puede ser negativo el valor."<<endl;
		return 0;
	}
	
	//ingrediente mas barato
	if(i1 < i2){
		if(i1 < i3){
			cout<<"Mas barato es i1."<<endl;
		}else{
			cout<<"Mas barato es i3."<<endl;
		}
	}
	else if(i2 < i1){
		if(i2 < i3){
			cout<<"Mas barato es i2."<<endl;
		}else{
			cout<<"Mas barato es i3."<<endl;
		}
	}
	
	cout<<"Precio de juntar los ingredientes: "<<endl;
	cin>>juntar;
	
	if(juntar <= 0){
		cout<<"Mal ingresado."<<endl;
		return 0;
	}
	
	//calcular gastos
	gasto_producto = i1+i2+i3+juntar;
	
	gastos = fabricar*gasto_producto;
	
	//calcular ganancia
	
	ganancia = fabricar*precio;
	
	//calcular beneficio total
	
	beneficio = (fabricar*precio) - gastos;
	
	cout<<"Beneficio total: "<<beneficio<<endl;
	cout<<"Gastos: "<<gastos<<endl;
	
	if(beneficio > gastos){
		cout<<"Beneficio mayor por: "<<beneficio - gastos<<endl;
	}else if(beneficio == gastos){
		cout<<"Beneficio igual a gastos."<<endl;
	}else{
		cout<<"Gasto mayor por: "<<gasto - beneficio<<endl;
	}
	
	cout<<"Ganancia esperada del dia: "<<endl;
	cin>>ganancia_esperada;
	
	if(beneficio >= ganancia_esperada){
		cout<<"Se cumplen las ventas esperadas de hoy."<<endl;
	}else{
		cout<<"No se cumplio la meta de ganancia."<<endl;
	}
			
}else{
	//no es necesario fabricar
	
	cout<<"No es necesario fabricar."<<endl;
	
	beneficio = demanda * precio;
	
	cout<<"Costos: 0"<<endl;
	cout<<"Beneficio total: "<<beneficio<<endl;
	
	cout<<"No existen gastos, por lo que el beneficio es mayor."<<endl;
	
	cout<<"Ganancia esperada del dia: "<<endl;
	cin>>ganancia_esperada;
	
	if(beneficio >= ganancia_esperada){
		cout<<"Se cumplen las ventas esperadas de hoy."<<endl;
	}else{
		cout<<"No se cumplio la meta de ganancia."<<endl;
	}
}
	
	
	
	return 0;
}
