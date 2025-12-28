#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    if (n<10) cout<<"DA";
    else if (9<n && n<100)
    {
        if (n%10 == n/10) cout<<"DA";
        else cout<<"NU";
    }
    else if (99<n && n <1000)
    {
        if (n/100 == n%10) cout<<"DA";
        else cout<<"NU";
    }
    else
    {
        int a,b,c,d;
        a = n/1000;
        b = (n/100)%10;
        c = (n/10)%10;
        d = n%10;
        if (a==d && b==c) cout<<"DA";
        else cout<<"NU";
    }
    

    return 0;
}