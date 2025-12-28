#include <iostream>


int main(){

    int n,m;
    std::cin>>n>>m;
    if (m%n==0)
    {
        std::cout<<m/n;
    }
    else
    {
        std::cout<<m/n+1;
    }
    

    return 0;
}