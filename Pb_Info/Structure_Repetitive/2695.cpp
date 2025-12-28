#include <iostream>
#include <cmath>

using namespace std;

int main(){


    int t;
    cin>>t;
    while (t--)
    {
        long long b;
        long long  a;
        cin>>a;
        b = cbrt(a);
        if ((b*b*b)==a)
        {
            cout<<"DA"<<endl;
        }
        else cout<<"NU"<<endl;
    }
    

    return 0;
}