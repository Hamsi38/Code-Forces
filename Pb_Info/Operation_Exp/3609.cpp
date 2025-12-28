#include <iostream>
#include <cmath>

int main(){

    long int a,b;
    std::cin>>a>>b;
    long int x,y;
    x = floor(b/10);
    y  =floor(a-1)/10;

    std::cout<<x-y;

    return 0;
}