#include <iostream>

using namespace std;

int main(){

    long long a,b;
    char c;
    cin>>a>>b;
    cin>>c;
    if (c=='+')
    {
        cout<<a+b;
    }
    else if (c=='-')
    {
        cout<<b-a;
    }
    else if (c=='*')
    {
        cout<<a*b;
    }
    else
    {
        cout<<b/a;
    }
    
    return 0;
}