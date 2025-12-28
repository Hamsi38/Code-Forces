#include <iostream>
#include <ios>
#include <iomanip>


int main(){

    int n;
    std::cin>>n;

    double result = 0,x,up = 0,down = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin>>x;
        up += x;
    }
    down = n*100;
    result = up/down;
    result *= 100;
    std::cout<<std::fixed<<std::setprecision(12)<<result;
    return 0;
}