#include <iostream>
using namespace std;

// Función que realiza el paso por valor
void pasarPorValor(int numero) {
    numero = 10; // Modificamos la copia local de "numero"
}

// Función que realiza el paso por referencia
void pasarPorReferencia(int& numero) {
    numero = 10; // Modificamos la variable original "numero"
}

int main() {
    int valor = 5;

    cout << "Valor original: " << valor << endl;

    pasarPorValor(valor);
    cout << "Paso por valor -> Resultado: " << valor << endl; // No se modifica el valor original

    pasarPorReferencia(valor);
    cout << "Paso por referencia -> Resultado: " << valor << endl; // Se modifica el valor original
    
    //cuando entregamos el dato por referencia, hacemos referencia a la direccion
    //de memoria de ese dato, por lo tanto, el dato se modifica originalmente y se
    //vera la alteracion en cualquier lugar.
    
    /*
    Cuando no usamos paso por referencia, el dato se modifica localmente, y solo es modifica dentro
    de esa función.
    */

    return 0;
}

