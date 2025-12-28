#include <iostream>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        int b;
        std::cin>>b;
        int arr[b];
        int odd=0,even=0;
        for (int k = 0; k < b; k++)
        {
            std::cin>>arr[k];
        }
        for (int j = 0; j < b; j++)
        {
            if (arr[j]%2==1) odd++;
        }
        if(odd%2==1) std::cout<<"NO"<<std::endl;
        else std::cout<<"YES"<<std::endl;
        
    }
    

    return 0;
}