#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int x = 'a';
    x = x + 1;

    char c = x;

    cout << "El valor del int \"x\" es " << x << "." << endl;
    cout << "El valor del char \"c\" es " << c << "." << endl;

    return 0;
}
/*
El valor del int "x" es 98.
El valor del char "c" es b.
*/