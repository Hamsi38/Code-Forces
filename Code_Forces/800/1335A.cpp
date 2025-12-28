#include <iostream>


int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin>>n;

    long long a,b=0;
    for (int i = 0; i < n; i++)
    {
        std::cin>>a;
        if(a == 1 || a==2){
            std::cout<<0<<std::endl;
        }else
        {
            if (a%2==0)
            {
                b = a/2-1;
            }
            else
            {
                b =a/2;
            }
            std::cout<<b<<std::endl;
        }
    }
    
    return 0;
}