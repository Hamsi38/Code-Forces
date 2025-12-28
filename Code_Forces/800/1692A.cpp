#include <iostream>

int main(){

    int n,a,b,c,d;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {   
        int cnt = 0;
        std::cin>>a>>b>>c>>d;
        if(a < b) cnt++;
        if(a < c) cnt++;
        if(a < d) cnt++;
        std::cout<<cnt<<std::endl;
    }
    

    return 0;
}