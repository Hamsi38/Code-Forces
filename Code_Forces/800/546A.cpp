#include <iostream>

int main(){

    int k,n,w,result = 0,sum=0;
    std::cin>>k>>n>>w;

    for (int i = 1; i <= w; i++)
    {
        sum += i*k;
    }

    if(sum>n) result = sum - n;

    std::cout<<result;

    return 0;
}