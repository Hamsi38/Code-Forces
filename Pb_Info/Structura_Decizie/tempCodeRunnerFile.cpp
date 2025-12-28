#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double a,b,c,disc,x1,x2;
    cin>>a>>b>>c;
    if (a!=0)
    {
        disc = b*b-4*a*c;
        if (disc>0)
        {
            x1 = (-b + sqrt(disc))/(2.0*a);
            x2 = (-b - sqrt(disc))/(2.0*a);
            if (x1>x2) cout<<fixed<<setprecision(2)<<x2<<" "<<x2;
            else cout<<fixed<<setprecision(2)<<x2<<" "<<x1;
        }
        else if (disc==0)
        {
            x1=(-b)/(2*a);
            cout<<fixed<<setprecision(2)<<x1;
        }
        else cout<<"Nu are solutii reale";
        
    }
    else cout<<"Nu are solutii reale";

    return 0;
}