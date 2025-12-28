#include <iostream>

using namespace std;

int main(){

    float v,T;
    int t,d;
    cin>>v>>d;
    v = v*1000/60;
    T = 1.0 *d/v;
    t = (int)T;
    if (T>t)
    {
        t++;
    }
    cout<<t;

    return 0;
}

// Program care calculează în câte minute va parcurge un melc distanța d (în metri),
// având viteza v (în km/h). Viteza este transformată în metri/minut,
// timpul este calculat și rotunjit în sus la cel mai apropiat minut întreg.