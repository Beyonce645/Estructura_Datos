#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int x, y, z;

    cout << "Introduzca el primer numero: ";
    cin >> x;

    cout << "Introduzca el segundo numero: ";
    cin >> y;

    z = x + y;

    cout << "La suma " << x << " mas " << y << " es igual a " << z << "." << endl;

    return 0;
}
/* 
Introduzca el primer numero: 3
Introduzca el segundo numero: 7
La suma 3 mas 7 es igual a 10
*/