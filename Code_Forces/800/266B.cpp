#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string str;
    int n,t,cnt=0;
    std::cin>>n>>t;
    std::cin>>str;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (str[j]=='B' && str[j+1]=='G')
            {
                std::swap(str[j],str[j+1]);
                j++;
            }
            
        }
        
    }
    
    std::cout<<str;
    return 0;
}