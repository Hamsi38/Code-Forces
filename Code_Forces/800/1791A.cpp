#include <iostream>
#include <string>

int main(){

    int n;
    std::string str = "codeforces";
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        char a;
        int x = 0;
        std::cin>>a;
        for (int j = 0; j < str.size(); j++)
        {
            if(a==str[j]) x = 1;
        }
        if (x==1)
        {
            std::cout<<"YES"<<std::endl;
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }
    }
    
    return 0;
}