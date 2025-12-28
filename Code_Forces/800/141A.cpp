#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1,str2,str3;
    std::cin>>str1>>str2>>str3;
    str1 += str2;
    int n1 = str1.size();
    int n3 = str3.size();

    if (n1!=n3)
    {
        std::cout<<"NO";
    }
    else
    {
        int flag = 0;
        std::sort(str1.begin(), str1.end());
        std::sort(str3.begin(),str3.end());
        for (int i = 0; i < n3; i++)
        {
            if (str1[i]!=str3[i])
            {
                flag =1;
                break;
            }
        }
        if (flag==0)
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