#include <iostream>

int main(){

    int x1,x2,x3,x4;
    int a=0,b=0,c=0, big = 0;
    std::cin>>x1>>x2>>x3>>x4;

    if (x1 > x2 && x1 > x3 && x1 > x4)
    {
        big = x1;
        a = big-x2;
        big = x1;
        b = big-x3;
        big = x1;
        c = big-x4;
    }
    else if (x2 > x1 && x2 > x3 && x2 > x4)
    {
        big = x2;
        a = big-x1;
        big = x2;
        b = big -x3;
        big = x2;
        c = big-x4;
    }
    else if (x3 > x1 && x3 > x2 && x3 > x4)
    {
        big = x3;
        a = big - x1;
        big = x3;
        b = big -x2;
        big = x3;
        c = big-x4;
    }
    else
    {
        big  =x4;
        a = big -x1;
        big =x4;
        b = big-x2;
        big =x4;
        c = big-x3;
    }
    
    std::cout<<a<<" "<<b<<" "<<c;
    return 0;
}