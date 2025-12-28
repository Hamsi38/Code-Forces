#include <iostream>

using namespace std;


int main(){

    int a,b,c,result=0;
    cin>>a>>b>>c;

    if (a<b && b<c)
    {
        result = b*c+a;
    }
    else if (b<a && a<c)
    {
        result = a*c+b;
    }
    else if(c<a && a<b)
    {
        result = b*a+c;
    }
    else if (a<c && c<b)
    {
        result = c*b+a;
    }
    else 
    {
        result = a*b+c;
    }
    
    
    cout<<result;


    return 0;
}