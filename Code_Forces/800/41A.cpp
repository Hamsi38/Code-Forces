#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string s,t,s_reversed;
    std::cin>>s>>t;

    if (s.size() != t.size())
    {
        std::cout<<"NO";
    }
    else
    {
        reverse(s.begin(),s.end());
        int con = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != t[i]){
                con = -1;
                break;
            }
        }
        if (con == 1)
        {
            std::cout<<"YES";
        }
        else
        {
            std::cout<<"NO";
        }
    }
    
    return 0;
}