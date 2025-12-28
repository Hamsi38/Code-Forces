#include <iostream>

int main(){

    int n,a,b,sum =0,capacity = 0;
    std::cin>>n;

    for (int i = 1; i <= n; i++)
    {
        std::cin>>a>>b;
        sum -= a;
        sum += b;
        if(capacity<sum) capacity  = sum;
    }   
    std::cout<<capacity;

    return 0;
}