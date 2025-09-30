#include <stdio.h>
#include "Persona.hpp"

int main(int argc, char **argv)
{
    Persona *p1= new Persona (18);
	p1 -> mostrar();
    p1 -> setEdad(20);
    p1 -> mostrar();
	return 0;
}
