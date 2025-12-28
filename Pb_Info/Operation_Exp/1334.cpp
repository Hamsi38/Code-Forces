#include <iostream>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int a,b,cnt=0,x;
        std::cin>>a>>b;
        if(a>b) x = a - b;
        else if(b > a) x = b - a;
        else if(a==b) x=0;

        if (x%10==0)
        {
            cnt = x/10;
        }
        else
        {
            cnt  = x/10;
            cnt++;
        }
        std::cout<<cnt<<std::endl;
    }
    

    return 0;
}