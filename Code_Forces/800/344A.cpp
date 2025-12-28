#include <iostream>
#include <string>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string str1,str2;

    int n,cnt=0;
    std::cin>>n>>str1;

    for (int i = 0; i < n-1; i++)
    {
        std::cin>>str2;
        if (str1!=str2)
        {
            cnt++;
            str1=str2;
        }
        
    }
    
    std::cout<<cnt+1;
    return 0;
}