#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //citeste doua catete si calculeaza ipotenuza
    //afiseaza cele trei laturi ale triungiului pe ecran
    int x, y;
    float ipotenuza;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    ipotenuza=sqrt(x*x+y*y);
    cout << "Raspuns : Cateta 1 = " << x << ",  Cateta 2 = " << y << ",  Ipotenuza = " << ipotenuza << endl;
    return 0;
}
