#include <iostream>

using namespace std;

int main(){

    int t,a,k,b;
    cin>>t;
    while (t--)
    {
        cin>>a;
        k = a/2020;
        b = a - k*2020;
        if (b<=k)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    

    return 0;
}