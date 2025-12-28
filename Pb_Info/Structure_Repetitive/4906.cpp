#include <iostream>

using namespace std;


int main(){


    int t,cnt=0;
    cin>>t;
    while (t--)
    {
        long long  a;
        cin>>a;
        if (a==10 || a==100 || a==1000 || a==10000 || a==100000) cnt++;
        
    }
    cout<<cnt;

    return 0;
}