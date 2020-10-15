#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float d, v1, v2, suma_km_intr_o_ora, timp_pana_la_intalnire;
    cout << "Se dau doua orase A si B." << endl;
    cout << "Introdceti distanta (km) dintre cele doua orase. d = ";
    cin >> d;
    cout << "Doua automobile pornesc in acelasi timp din cele doua orase." << endl;
    cout << "Introdceti viteza (km/h) cu care vreti sa se deplaseze primul automobil. v1 = ";
    cin >> v1;
    cout << "Introdceti viteza (km/h) cu care vreti sa se deplaseze al doilea automobil. v2 = ";
    cin >> v2;
    suma_km_intr_o_ora = v1 + v2;
    cout << "Cele doua masini, parcurg intr-o ora " << suma_km_intr_o_ora << "km" << endl;
    timp_pana_la_intalnire = d / suma_km_intr_o_ora;
    cout << "Raspuns : Cele doua masini se vor intalni in : " << timp_pana_la_intalnire << " h" << " sau " << ( timp_pana_la_intalnire * 60 ) << " minute" << endl;
    return 0;
}
