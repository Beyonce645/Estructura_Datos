#include <iostream>
#include <Pila.hpp>

int main(int argc, char **argv)
{
	Pila pila;
    pila.insertar(1);
    pila.insertar(2);
    pila.insertar(3);
    pila.insertar(4);
    pila.mostrar();
    
    int cima = pila.cima();
    pila.extraer();
    cout << "\tDespues de extraer la cima (" << cima << ")..." << endl;
    pila.mostrar();

    pila.insertar(5);
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();

    return 0;

}
/*    El contenido de la pila es: ->4->3->2->1
        Despues de extraer la cima (4)...
        El contenido de la pila es: ->3->2->1
        El contenido de la pila es: ->5->3->2->1
        El contenido de la pila es: ->3->2->1
        El contenido de la pila es: ->2->1
        El contenido de la pila es: ->1
        El contenido de la pila es:
*/