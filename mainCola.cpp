
#include "Cola.hpp"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    Cola cola;

    cola.insertar(1); cola.mostrar();
    cola.insertar(2); cola.mostrar();
    cola.insertar(3); cola.mostrar();
    cola.insertar(4); cola.mostrar();
    cola.insertar(5); cola.mostrar();

    int primero = cola.verPrimero();
    cout << "Despues de extraer el primero (" << primero << ")..." << endl;
    cola.eliminar();
    cola.mostrar();

    cola.eliminar(); cola.mostrar();
    cola.eliminar(); cola.mostrar();
    cola.eliminar(); cola.mostrar();
    cola.eliminar(); cola.mostrar();

    return 0;
}
/*El contenido de la cola es: -> 1
El contenido de la cola es: -> 1 -> 2
El contenido de la cola es: -> 1 -> 2 -> 3
El contenido de la cola es: -> 1 -> 2 -> 3 -> 4
El contenido de la cola es: -> 1 -> 2 -> 3 -> 4 -> 5
Despues de extraer el primero (1)...
El contenido de la cola es: -> 2 -> 3 -> 4 -> 5
El contenido de la cola es: -> 3 -> 4 -> 5
El contenido de la cola es: -> 4 -> 5
El contenido de la cola es: -> 5
El contenido de la cola es: */