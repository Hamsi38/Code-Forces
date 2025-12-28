#include <iostream>
#include <algorithm>
#include <vector>


int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,m;
    std::cin>>n;

    while (n--)
    {
        std::vector <int>v;
        std::cin>>m;
            int power = 1;
        while (m>0)
        {
            if (m%10>0)
            {
                v.push_back((m%10)*power);
            }
            m/=10;
            power *=10;
        }
        std::cout<<v.size()<<std::endl;
        for(auto a : v) std::cout<<a<<" ";
    std::cout<<std::endl;
    }
    return 0;
}
