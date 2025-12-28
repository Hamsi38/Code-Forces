#include <iostream>
#include <vector>

int main(){
    std::vector<int>lucky = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,flag = 0;
    std::cin>>n;

    for(int x:lucky){
        if(n%x==0 || n==x){
            flag= 1;
            break;
        }
    }
    if (flag == 1)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    
    return 0;
}