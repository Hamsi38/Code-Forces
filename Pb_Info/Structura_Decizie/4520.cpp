#include <iostream>

using namespace std;

int main(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if (d<a || b<c)
    {
        cout<<-1<<" "<<-1;
    }
    else if (a==c && d==b)
    {
        cout<<a<<" "<<d;
    }
    
    else if (a<c && d<b)
    {
        cout<<c<<" "<<d;
    }
    else if (a<c && b<d)
    {
        cout<<c<<" "<<b;
    }
    else if (c<a && d<b)
    {
        cout<<a<<" "<<d;
    }
    else if (a<c && b<d)
    {
        cout<<a<<" "<<b;
    }
    else if (a<c && b<d)
    {
        cout<<c<<" "<<b;
    }
    else if (c<a && d<b)
    {
        cout<<a<<" "<<d;
    }
    


    return 0;
}