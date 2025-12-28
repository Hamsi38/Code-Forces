#include <iostream>

int main(){

    int n,h,p,cnt=0;
    std::cin>>n>>h;

    for (int i = 0; i < n; i++)
    {
        std::cin>>p;
        if (p>h) cnt += 2;
        else cnt++;
    }
    std::cout<<cnt;

    return 0;
}