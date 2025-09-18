#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int x, y, min, max;

    cout << "Valor de x: ";
    cin >> x;

    cout << "Valor de y: ";
    cin >> y;

    if (x < y)
        min = x;
    else
        min = y;

    max = (x > y ? x : y);

    cout << "El minimo es " << min << " y el maximo es " << max << endl;

    return 0;
}
/*
Valor de x: 5
Valor de y: 9
El minimo es 5 y el maximo es 9

Valor de x: 12
Valor de y: -3
El minimo es -3 y el maximo es 12

Valor de x: 7
Valor de y: 7
El minimo es 7 y el maximo es 7
*/