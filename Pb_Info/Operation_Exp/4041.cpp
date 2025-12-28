#include <iostream>

int main(){

    long long int n;
    int m = 1 ,maxim = 1;
    std::cin>>n;
    while (n > maxim)
    {
        m = m + 1;
        maxim = maxim + m;
    }
    std::cout<<m;

    return 0;
}