#include <iostream>

int main(){

    int n;
    std::cin>>n;
    if (n%100 == 0)
    {
        std::cout<<n;

    }
    else
    {
        int a;
        a = n%100;
        n += (100-a);
        std::cout<<n;
    }
    


    return 0;
}