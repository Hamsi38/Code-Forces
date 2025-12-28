#include <iostream>

int main(){

    int n,k,sum =0 ,divid = 0,x;
    std::cin>>n>>k;

    for (int i = 0; i < n; i++)
    {
        std::cin>>x;
        if (x%2==1) sum += x;
        if(x%k == 0) divid++;
    }
    
    std::cout<<sum<<" "<<divid;
    return 0;
}