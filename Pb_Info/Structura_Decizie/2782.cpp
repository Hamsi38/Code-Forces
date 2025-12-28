#include <iostream>

using namespace std;

int main(){

    int HA,HB,D,x;
    cin>>HA>>HB>>D;

    if (HA==HB)
    {
        x = D/2;
        cout<<x;
    }
    else if (HA>HB)
    {
        x  = (D*D+HB*HB-HA*HA)/(2*D);
        cout<<x;
    }
    else
    {
        x = (D*D+HA*HA-HB*HB)/(2*D);
        cout<<x;
    }

    return 0;
}