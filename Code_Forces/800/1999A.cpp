#include <iostream>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,sum=0,b;
        std::cin>>a;
        b = a%10;
        a /= 10;
        sum += b+a;
        std::cout<<sum<<std::endl;
    }
    
    return 0;
}