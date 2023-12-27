#include<iostream>
using namespace std;

class Node{
	private:
		int value;
		Node* next;
	public:
		Node(int value){
			this->value = value;
			this->next = NULL;
		}
		int getValue(){
			return value;
		}
		Node* getNext(){
			return next;
		}
		void setNext(Node* n){
			this->next = n;
		}
};

class Lista{
	private:
		Node* cabeza;
	public:
		
		Lista(){
			cabeza = NULL;
		}
		
		void agregar(int n){
			Node* nuevo = new Node(n);
			
			if(cabeza == NULL){
				cabeza = nuevo;
			}else if(cabeza->getNext() == NULL){
				cabeza->setNext(nuevo);
			}else{
				//creo un nodo auxiliar de la cabeza para avanzar
				Node* temp = cabeza;
            	while (temp->getNext() != NULL) {
                	temp = temp->getNext();
            	}
            	//cuando llegue a que su siguiente es nulo, agrego
            	temp->setNext(nuevo);
			}
		}
		
		void imprimir(){
			Node* temp = cabeza;
			
			if(temp == NULL){
				cout<<"No hay elementos en la lista."<<endl;
			}
			
			while (temp != NULL) {
				cout<<temp->getValue()<<" ";
                temp = temp->getNext();
            }
			
		}
		
		void buscar(int n){
			
			bool encontrado=false;
			
			Node* temp = cabeza;
			
			while (temp != NULL) {
				if(temp->getValue() == n){
					encontrado = true;
					break;
				}
                temp = temp->getNext();
            }
            
            if(encontrado){
            	cout<<"Se ha encontrado el valor buscado."<<endl;
			}else{
				cout<<"No se ha encontrado."<<endl;
			}
		}
};

int main (){
	Lista *list = new Lista();
	
	list->agregar(5);
	list->agregar(10);
	list->agregar(15);
	list->agregar(20);
	list->agregar(25);
	list->agregar(30);
	
	list->imprimir();
	
	list->buscar(25);

	
	return 0;
}
