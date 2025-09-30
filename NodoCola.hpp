#include <iostream>
using namespace std;

class NodoCola
{
public:
    NodoCola(int v, NodoCola* sig = NULL);
    ~NodoCola();

private:
    int valor;
    NodoCola* siguiente;

    friend class Cola;
};

typedef NodoCola* pnodoCola;

//endif
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
El contenido de la cola es:*/