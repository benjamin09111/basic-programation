#include<iostream>
#include<stack>
using namespace std;

class Node {
private:
    int value;
    Node* left;
    Node* right;

public:
    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }

    int getValue() {
        return value;
    }

    Node* getRight() {
        return right;
    }

    Node* getLeft() {
        return left;
    }

    void setRight(Node* n) {
        this->right = n;
    }

    void setLeft(Node* n) {
        this->left = n;
    }
};

class Arbol_Binario {
public:
    Node* head;

public:
    Arbol_Binario() {
        head = NULL;
    }

    // insertar
    void insertar(int n) {
        Node* nuevo = new Node(n);

        if (head == NULL) {
            head = nuevo;
        } else if (head->getLeft() == NULL && head->getRight() == NULL) {
            if (n < head->getValue()) {
                head->setLeft(nuevo);
            } else {
                head->setRight(nuevo);
            }
        } else {
            Node* temp = head;

            while (temp != NULL) {
                if (n < temp->getValue()) {
                    if (temp->getLeft() == NULL) {
                        temp->setLeft(nuevo);
                        return;
                    }
                    temp = temp->getLeft();

                } else {
                    if (temp->getRight() == NULL) {
                        temp->setRight(nuevo);
                        return;
                    }
                    temp = temp->getRight();
                }
            }
        }
    }

    void recorrerOrden(Node* current) {
        if (current != NULL) {
            stack<Node*> nodeStack;

            while (current != NULL || !nodeStack.empty()) {
                // Almaceno todos los nodos izquierdos en la pila
                while (current != NULL) {
                    nodeStack.push(current);
                    current = current->getLeft();
                }

                // Tomo el nodo más pequeño de la pila y lo saco
                current = nodeStack.top();
                nodeStack.pop();

                // Imprimo el valor y avanzo hacia el nodo derecho
                cout << current->getValue() << " ";

                current = current->getRight();
            }
        }
    }
    
    bool buscarValor(Node* nodo, int valorBuscado) {
    	if (nodo == NULL) {
        return false;
    	}

    	if (valorBuscado == nodo->getValue()) {
        	return true;
    	} else if (valorBuscado < nodo->getValue()) {
        	return buscarValor(nodo->getLeft(), valorBuscado);
    	} else {
        	return buscarValor(nodo->getRight(), valorBuscado);
    	}
	}
	
	bool buscar(int valorBuscado) {
    	return buscarValor(head, valorBuscado);
	}
	
	//eliminar
	Node* eliminarNodo(Node* root, int valor) {
    	if (root == nullptr) {
        	return root;
    	}

    	if (valor < root->getValue()) {
        	root->setLeft(eliminarNodo(root->getLeft(), valor));
    	} else if (valor > root->getValue()) {
        	root->setRight(eliminarNodo(root->getRight(), valor));
    	} else {
        	if (root->getLeft() == NULL) {
            	Node* temp = root->getRight();
            	delete root;
            	return temp;
        } else if (root->getRight() == NULL) {
            Node* temp = root->getLeft();
            delete root;
            return temp;
        }

        Node* temp = encontrarMinimo(root->getRight());
        root->setValue(temp->getValue());
        root->setRight(eliminarNodo(root->getRight(), temp->getValue()));
    }
    	return root;
	}
	
	Node* encontrarMinimo(Node* nodo) {
    	while (nodo->getLeft() != nullptr) {
        	nodo = nodo->getLeft();
    	}
    	return nodo;
	}
	
	int alturaArbol(Node* nodo) {
    	if (nodo == nullptr) {
        	return -1; // Árbol vacío tiene altura -1
    	}

    	int alturaIzquierda = alturaArbol(nodo->getLeft());
    	int alturaDerecha = alturaArbol(nodo->getRight());

    	return 1 + std::max(alturaIzquierda, alturaDerecha);
	}	

	Node* encontrarMinimo(Node* nodo) {
    	while (nodo->getLeft() != nullptr) {
        	nodo = nodo->getLeft();
    	}
    	return nodo;
	}

	Node* encontrarMaximo(Node* nodo) {
    	while (nodo->getRight() != nullptr) {
        	nodo = nodo->getRight();
    	}
    	return nodo;
	}
};

int main() {
    Arbol_Binario tree;

    // Insertar nodos en el árbol
    tree.insertar(5);
    tree.insertar(3);
    tree.insertar(8);
    tree.insertar(2);
    tree.insertar(4);
    tree.insertar(7);
    tree.insertar(9);

    // Recorrer e imprimir en orden
    tree.recorrerOrden(tree.head);
    cout << endl;

    return 0;
}

