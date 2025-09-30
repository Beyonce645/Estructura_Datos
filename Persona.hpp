#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <cstdlib> 
using namespace std;
class Persona
{
public:
    Persona (int edad);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    
private:
    bool genero;
    int edad;
    char dni[10] ;
    void generarGenero(){
    genero = rand() % 2;
    }
    void generarDNI() {
        for (int i = 0; i < 8; i++)
            dni[i] = '0' + rand() % 10;
        dni[8] = 'A' + rand() % 26;
        dni[9] = '\0';
    }
};

#endif //persona_hpp