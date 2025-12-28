#include <iostream>
#include <string>
#include <cctype>

int main(){

    std::string S,T;
    std::cin>>S>>T;
    char temp; 
    int pos = - 1;

    for (int i = 2; i < (int)S.size(); i++)
    {
        if (isupper(S[i]))
        {
            temp = S[i-1];
            pos = i;
            break;
        }
    }
    
    if (pos == -1)
    {
        std::cout<<"Yes";
    }
    else
    {
        if (T.find(temp) != std::string::npos)
        {
            std::cout<<"No";
        }
        else
        {
            std::cout<<"Yes";
        }
    }

    return 0;
}