#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while (t--)
    {
        std::string str;
        char arr[5] = {'T','i','m','r','u'};
        int l;
        std::cin>>l>>str;
        if (l==5)
        {
            std::sort(str.begin(), str.end());
            int con = 0;
            for (int i = 0; i < 5; i++)
            {
                if (str[i]!=arr[i])
                {
                    std::cout<<"NO"<<std::endl;
                    con =1 ;
                    break;
                }
            }
            if (con==0)
            {
                std::cout<<"YES"<<std::endl;
            }
            
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }
        str.clear();
    }
    
    

    return 0;
}