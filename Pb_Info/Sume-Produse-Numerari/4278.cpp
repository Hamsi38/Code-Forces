#include <iostream>

int main(){

    int n,sum=0,even=0;

    while (1)
    {
        std::cin>>n;
        if(n == 0) break;
        if(n%2==0) sum +=n;
        if(9<n && n<100) even++;
    }
    std::cout<<sum<<" "<<even;

    return 0;
}