#include <iostream>

using namespace std;


int main(){

    int a,b,d;
    cin>>a>>b>>d;
    int x,y;
    if(a%d==0) x = a/d;
    else x = a/d + 1;
    if(b%d==0) y = b/d;
    else y = b/d + 1;
    cout<<x*y;
    
    
    return 0;
}