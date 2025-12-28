#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std:: string val1,val2,result;
    std::cin>>val1>>val2;

    for (int i = 0; i < val1.size(); i++)
    {
        if(val1[i]==val2[i]){
            result.push_back('0');
        }
        else
        {
            result.push_back('1');
        }
        
    }


    std::cout<<result;

    return 0;
}