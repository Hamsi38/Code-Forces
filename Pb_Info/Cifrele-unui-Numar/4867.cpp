#include <iostream>

using namespace std;

int main(){

    int a,b,suma=0,sumb=0;
    cin>>a>>b;

    while (a>0)
    {
        suma += a%10;
        a /= 10;
    }
    
    while (b>0)
    {
        sumb += b%10;
        b /= 10;
    }
    

    if ((suma%2==0 || suma%3==0 || suma%5==0) && (sumb%2==0 || sumb%3==0 ||sumb%5==0))
    {
        cout<<"DA";
    }
    else cout<<"NU";

    return 0;
}