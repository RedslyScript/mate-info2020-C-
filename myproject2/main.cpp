#include <iostream>

using namespace std;

int main()
{
        int i, x, y;
        cout<<"Introduceti 5 valori de intrare: "<<endl;
        for(i=1; i<=5; i++)
        {
            cout<<"Ïntroduceti valoarea"<<i<<":";
            cin>>x;
            if(x<0)
                y=x*x-2;
            else
                if(x==0)
                  y=3;
                else y=x+2;
            cout<<"Valoarea funtiei in punctul "<<x<<" este "<<y<<endl;
        }
    return 0;
}
