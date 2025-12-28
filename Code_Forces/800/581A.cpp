#include <iostream>

int main(){

    int a,b,x=0,y=0;
    std::cin>>a>>b;
    if(a > b)
    {
        x = b;
        y = a - b;
        y /= 2;
    }
    else
    {
        x = a;
        y = b - a;
        y /= 2;
    }
    std::cout<<x<<" "<<y;

    return 0;
}