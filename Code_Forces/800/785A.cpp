#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    int n,sum=0;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>str;
        if(str[0]=='T') sum+=4;
        else if(str[0]=='C') sum+=6;
        else if(str[0]=='O') sum+=8;
        else if(str[0]=='D') sum+=12;
        else sum+=20;
    }
    std::cout<<sum;
    return 0;
}