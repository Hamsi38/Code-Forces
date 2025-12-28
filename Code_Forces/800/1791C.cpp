#include <iostream>
#include <string>

int main(){

    int n;
    std::cin>>n;

    while (n--)
    {
        std::string str;
        int lenght;
        std::cin>>lenght>>str;
        int cnt = 0;
        int end = lenght;
        for (int i = 0; i < lenght/2; i++)
        {
            if(str[i]==str[end-1]) break;
            if(str[i]=='0' && str[end-1]=='1') cnt+=2;
            else if(str[i]=='1' && str[end-1]=='0') cnt+=2;
            end--;
        }
        std::cout<<lenght-cnt<<std::endl;
        str.clear();
    }
    

    return 0;
}