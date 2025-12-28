#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int t;
    cin>>t;

    double y = 0,x, result =0;
    double a = t;

    while (t--)
    {
        cin>>x;
        y += 1.0/x;
    }
    result = a/y;
    result = (int)(result*100)/100.;
    cout<<fixed<<setprecision(2)<<result;

    return 0;
}