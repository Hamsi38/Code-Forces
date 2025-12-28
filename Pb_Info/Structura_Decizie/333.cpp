#include <iostream>

using namespace std;

int main(){

    double a,b,c;
    cin>>a>>b>>c;
    if (a+b>c && b+c>a && a+c>b)
    {
        double big,s1,s2;
        if (a>b && a>c)
        {
            big = a;
            s1 = b;
            s2 = c;
        }
        else if(b>a && b>c)
        {
            big = b;
            s1 = a;
            s2 = c;
        }
        else
        {
            big = c;
            s1 = a;
            s2 = b;
        }

        if (s1*s1 + s2*s2 == big*big)
        {
            cout<<"triunghi dreptunghic";
        }
        else if (s1*s1 + s2*s2 <= big*big)
        {
            cout<<"triunghi obtuzunghic";
        }
        else if(s1*s1 + s2*s2 >= big*big)
        {
            cout<<"triunghi ascutitunghic";
        }
        else cout<<"nu este triunghi";
    }
    else cout<<"nu este triunghi";

    return 0;
}