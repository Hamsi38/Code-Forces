#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double a,b,c,R=0,S=0,p;
    cin>>a>>b>>c;
    if (a+b>c && c+b>a && a+c>b)
    {
        p = (a+b+c)/2;
        S = p*(p-a)*(p-b)*(p-c);
        S = sqrt(S);
        R = (a*b*c)/(4*S);
        R = (int)(R*100)/100.;
        cout<<fixed<<setprecision(2)<<R;
    }
    else cout<<"Imposibil";

    return 0;
}