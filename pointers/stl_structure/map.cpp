#include<iostream>
#include<map>
using namespace std;

class Trabajador{
	private:
		string nombre;
		int salario;
		bool trabajando;
		char grupo;
	public:
		Trabajador(string nombre, int salario, bool trabajando){
			this->nombre = nombre;
			this->salario = salario;
			this->trabajando = trabajando;
			
			if(salario<=300000 && salario>150000){
				this->grupo = 'A';
			}else if(salario>300000 && salario<=400000){
				this->grupo = 'B';
			}else if(salario>400000){
				this->grupo = 'C';
			}else{
				this->grupo = '0';
			}
			
		}
		string getNombre(){
			return nombre;
		}
		int getSalario(){
			return salario;
		}
		bool getTrabajando(){
			return trabajando;
		}
		char getGrupo(){
			return grupo;
		}
		void modificarSalario(int salario){
			this->salario = salario;
		}
		void trabajar(){
			if(!this->trabajando){
				this->trabajando = true;
			}
		}
		void descansar(){
			if(this->trabajando){
				this->trabajando = false;
			}
		}
		void imprimir(){
			cout<<"{"<<endl;
			cout<<"nombre: "<<nombre<<","<<endl;
			cout<<"salario: "<<salario<<","<<endl;
			cout<<"grupo: "<<grupo<<","<<endl;
			if(this->trabajando){
				cout<<"trabajando: si"<<endl;
			}else{
				cout<<"trabajando: no"<<endl;
			}
			cout<<"}"<<endl;
		}
};

/*
Cree una clase con un mapa y un id integer.
Realice operaciones básicas.
*/

typedef pair<int,Trabajador> par;
typedef map<int,Trabajador> mapa;

//paso por referencia o por valor
void borrarDato(mapa &m, int llave){
	cout<< m.erase(llave);
}

int main (){
	
	//trabajadores
	Trabajador t1 = Trabajador("Pepe",500000,true);
	Trabajador t2 = Trabajador("Sofia",200000,false);
	Trabajador t3 = Trabajador("Juan",300000,true);
	
	
	int contador=1;
	mapa trabajadores;
	
	trabajadores.insert( par(contador,t1) );
	contador++;
	trabajadores.insert( par(contador,t2) );
	contador++;
	trabajadores.insert( par(contador,t3) );
	contador++;
	
	/* IMPRIMIR
	for(i = trabajadores.begin(); i!=trabajadores.end(); i++){
		cout<< i->first <<endl;
		
		i->second.imprimir();
		
		cout<<endl<<endl;
	}
	*/
	
	map<int,Trabajador>::iterator i;
	
	borrarDato(trabajadores,1);
	
	cout<< trabajadores.erase(1);
	
	//borrar, me retorna true si lo pudo borrar.
	
	
	/* IMPRIMIR SALARIOS
	for(i = trabajadores.begin(); i!=trabajadores.end(); i++){
		cout<< i->first <<endl;
		
		cout<< i->second.getSalario()<<endl;
		
		cout<<endl<<endl;
	}
	*/
	
	/* BUSCAR POR NOMBRE O ALGUN DATO ESPECIFICO ES MANUAL.
	string nombre;
	cout<<"Ingrese un nombre: "<<endl;
	cin>>nombre;
		for(i = trabajadores.begin(); i!=trabajadores.end(); i++){
		if( i->second.getNombre() == nombre ){
			i->second.imprimir();
			break;
		}
	}
	*/
	
	/* BUSCAR POR LLAVE
	int buscar;
	cout<<"Ingrees llave: "<<endl;
	cin>>buscar;
	
	i = trabajadores.find(buscar);
	
	if(i!=trabajadores.end()){
		cout<< i->second.getNombre() <<endl;
	}else{
		cout<<"No se encuentra."<<endl;
	}
	*/
	
	return 0;
}
