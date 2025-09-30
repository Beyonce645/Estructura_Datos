#include "Persona.hpp"
Persona :: Persona (int e){
    //El dni y el genero se establece de forma auto
    this -> edad =e;
}
int Persona :: getEdad(){
    return this -> edad;
}
void Persona :: mostrar (){
    cout << "Tiene " << getEdad()<<" genero "<<genero<<" dni: "<< dni<< endl;
}
void Persona :: setEdad(int e){
    this -> edad = e;
}
bool Persona :: esMujer(){
    return this -> genero;
}


Persona :: ~Persona()
{

}