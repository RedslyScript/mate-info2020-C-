#include <iostream>

using namespace std;

int main()
{
    //citeste trei valori de la tastatura si le afiseaza in doua feluri
    double a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "Raspunsul P1/a" << endl << a << endl << b << endl << c << endl;
    cout << "Raspunsul P1/b" << endl << a << "!" << b << "!" << c << endl;
    return 0;
}
