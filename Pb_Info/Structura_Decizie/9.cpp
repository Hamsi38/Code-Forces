#include <iostream>

int main(){

    int a,b,c,sum=0;
    std::cin>>a>>b>>c;
    if(a>b && a>c )
    {
        sum += a;
        if (b>c) sum -= c;
        else sum -=b;
    }  
    else if (b>a && b>c)
    {
        sum += b;
        if (a>c) sum -= c;
        else sum -= a;
    }
    else
    {
        sum += c;
        if (a>b) sum -= b;
        else sum -= a;
        
    }
    std::cout<<sum;

    return 0;
}