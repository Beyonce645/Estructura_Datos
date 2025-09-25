#include <iostream>
using namespace std;

void sube(int* n)
{
    (*n)++;
    return;
}

void mas(int& n)
{
    n++;
    return;
}

int main(int argc, char** argv)
{
    int a;
    cout << "Escribe un dato entero: ";
    cin >> a;

    for(int i = 0; i < 10; i++) {
        cout << i << ": " << a << endl;
        sube(&a);
    }

    cout << endl;
    for(int i = 0; i < 10; i++) {
        cout << i << ": " << a << endl;
        mas(a);
    }

    return 0;
}
/* Escribe un dato entero: 5
0: 5
1: 6
2: 7
3: 8
4: 9
5: 10
6: 11
7: 12
8: 13
9: 14

0: 15
1: 16
2: 17
3: 18
4: 19
5: 20
6: 21
7: 22
8: 23
9: 24*/