#include <iostream>

int main(){

    int n,M=0,C=0;
    std::cin>>n;
    while (n--)
    {
        int a,b;
        std::cin>>a>>b;
        if(a>b) M++;
        else if(b>a) C++;
    }
    if (M>C)
    {
        std::cout<<"Mishka";
    }
    else if (C>M)
    {
        std::cout<<"Chris";
    }
    else
    {
        std::cout<<"Friendship is magic!^^";
    }
    
    

    return 0;
}