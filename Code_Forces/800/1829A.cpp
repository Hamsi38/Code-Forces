#include <iostream>
#include <string>

int main(){

    int t;
    std::cin>>t;
    std::string org = "codeforces";
    while (t--)
    {
        std::string str;
        std::cin>>str;
        int cnt=0;
        for (int i = 0; i < 10; i++)
        {
            if (str[i]!=org[i]) cnt++;
        }
        std::cout<<cnt<<std::endl;
    }
    

    return 0;
}