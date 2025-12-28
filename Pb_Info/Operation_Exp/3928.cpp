#include <iostream>
#include <cmath>

int main(){

    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    int result = 0,x,y,z,t;
    x = floor((a-1)/3);
    y = floor(b/3);
    result += y-x;
    z = floor((c-1)/3);
    t = floor(d/3);
    result += t-z;
    std::cout<<result;
    return 0;
}