#include <iostream>
#include <algorithm>

int main(){

    std::string n;
    std::cin>>n;

    int len = n.length(),cnt=0;

    std::sort(n.begin(),n.end());

    for (int i = 0; i < len; i++)
    {
        if(n[i-1]!=n[i]) cnt++;
    }
    if (cnt%2==0)
    {
        std::cout<<"CHAT WITH HER!";
    }
    else
    {
        std::cout<<"IGNORE HIM!";
    }
    
    return 0;
}