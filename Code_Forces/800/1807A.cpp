#include <iostream>

int main(){

    int n,a,b,c;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cin>>a>>b>>c;
        if(a+b == c) std::cout<<"+"<<std::endl;
        else std::cout<<"-"<<std::endl;
    }
    
    return 0;
}