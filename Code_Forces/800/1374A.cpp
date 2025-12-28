#include <iostream>
#include <cmath>


int main(){

    int t;
    std::cin>>t;
    while (t--)
    {
        int x,y,n;
        std::cin>>x>>y>>n;

        if (n - n%x +y <= n )
        {
            std::cout<<n - n%x +y<<std::endl;
        }
        else
        {
            std::cout<<n - n%x -(x-y)<<std::endl;
        }
        
    }
    

    return 0;
}