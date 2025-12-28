#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int a,b,c,d;

    d = t%10;
    t /= 10;
    c = t%10;
    t /= 10;
    b = t%10;
    t /= 10;
    a = t;
    if (a>b && a>c && a>d)
    {
        cout<<a*10+b;
    }
    else if (b>a && b>c && b>d)
    {
        if(a>c)
        {
            cout<<b*10+a;
        }
        else
        {
            cout<<b*10+c;
        }
    }
    else if (c>a && c>b && c>d)
    {
        if (b>d)
        {
            cout<<c*10 + b;
        }
        else cout<< c*10 + d;
    }
    else
    {
        cout<<d*10 + c;
        
    }
    

    return 0;
}