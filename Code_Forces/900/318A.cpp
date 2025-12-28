#include <iostream>

int main(){

    long long n,k,result = 0,half;
    std::cin>>n>>k;

    if (n%2==0 )
    {
        half = n/2;
        if (k>half)
        {
            result = 2*(k-half);
            std::cout<<result;
        }
        else
        {
            result = 2*(k -1)+1;
            std::cout<<result;
        }
        
    }
    else
    {
        half = n/2+1;
        if (k>half)
        {
            result = 2*(k-half);
            std::cout<<result;
        }
        else
        {
            result = 2*(k-1)+1;
            std::cout<<result;
        }
    }

    return 0;
}