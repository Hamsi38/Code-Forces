#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n,q,p,result=0;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>q>>p;
        if(q+2 <= p) result++;
    }
    std::cout<<result;
    return 0;
}