#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
    int cuantos;
    cout <<"Cuantos datos va a introducir?";
    cin >> cuantos;
    if (cuantos <=0)
        cout << "La cantidad no es valida\n";
    else{
        int llevo=0;
        double suma =0, dato,media=0;
        while (llevo<cuantos) {
            llevo++;
            cout <<"Introduzca el dato" << llevo << "/" << cuantos << ":";
            cin >> dato;
            suma += dato;
            
        };
        media =suma/cuantos;
        cout << "La media de los " << cuantos<< "datos es " << media << ".\n";
        
    };
    return 0;

}
/* Cuantos datos va a introducir? 3
Introduzca el dato 1/3: 5
Introduzca el dato 2/3: 7
Introduzca el dato 3/3: 4
La media de los 3 datos es 5.33333.
*/
