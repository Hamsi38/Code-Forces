#include <iostream>

int main(){

    int t;
    std::cin>>t;

    while (t--)
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a==b && a!=c) std::cout<<c<<std::endl;
        else if(b==c && b!=a) std::cout<<a<<std::endl;
        else std::cout<<b<<std::endl;
    }
    
    return 0;
}