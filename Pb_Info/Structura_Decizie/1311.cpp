#include <iostream>


int main(){

    int n;
    std::cin>>n;
    int a,b,c;
    a = n/100;
    c = n%10;
    n = n/10;
    b = n%10;
    if (a==b && a==c && c==b)
    {
        std::cout<<"da";
    }
    else
    {
        std::cout<<"nu";
    }
    

    return 0;
}