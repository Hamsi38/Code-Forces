#include <iostream>

using namespace std;

int main(){

    int a,b,c,h,x;
    cin>>a>>b>>c>>h;
    if (a<b && a<c) x = a;
    else if(b<a && b<c) x = b;
    else x =c;
    
    int he;
    he = h*100;
    cout<<he/x;

    return 0;
}