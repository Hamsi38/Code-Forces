#include <iostream>

int main(){

    int n,k,x,sum =0, even = 0;
    std::cin>>n>>k;

    for (int i = 0; i < n; i++)
    {
        std::cin>>x;
        if(x%k==0) sum += x;
        if(x%2==0) even++;
    }
    std::cout<<sum<<" "<<even;

    return 0;
}