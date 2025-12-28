#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double n,x,s=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        s += x*x;
    }
    s = s/n;
    s = sqrt(s);
    cout<<fixed<<setprecision(2)<<s;

    return 0;
}