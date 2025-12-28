#include <iostream>
#include <cmath>

int main(){

    int n,rest = 0;
    std::cin>>n;

    rest = (int)n/5;

    if (n%5 != 0)
    {
        rest += 1;
    }
    std::cout<<rest;

    //! i made this 
    // if (n<6)
    // {
    //     std::cout<<1;
    // }
    // else
    // {
    //     while (n%5 == 0)
    //     {
    //         cnt++;
    //         n--;
    //     }
    //     fits = ceil(fits/5);
    //     std::cout<<fits;
    // }
    
    return 0;
}