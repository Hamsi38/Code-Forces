#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k,r,result = 0,a;
    std::cin>>k>>r;
    a = k;
    if ((k-r)%10==0)
    {
        std::cout<<1;
    }
    else
    {
        while (k%10!=0)
        {
            if ((k-r)%10 == 0)
            {
                result++;
                break;
            }
            k += a;
            result++;
        }
        if(k%10==0) result++;
        std::cout<<result;
    }
    
    return 0;
}