#include <iostream>


int main(){

    int h1,m1,x;
    std::cin>>h1>>m1>>x;
    int a,b,c;
    a = (m1+x)%60;
    c = (m1+x)/60;
    b = (c+h1)%24;
    std::cout<<b<<" "<<a;

    return 0;
}