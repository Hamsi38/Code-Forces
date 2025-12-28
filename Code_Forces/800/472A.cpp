#include <iostream>

int main(){

    int t,a,b;
    std::cin>>t;

    if (t%2==0)
    {
        a = t-4;
        b = 4;
        std::cout<<a<<" "<<b;
    }
    else{
        a = t-9;
        b = 9;
        std::cout<<a<<" "<<b;
    }
    return 0;
}