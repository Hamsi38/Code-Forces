#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a;
        std::cin>>a;
        int arr[a];
        for (int j = 0; j < a; j++)
        {   
            std::cin>>arr[j];
        }
        std::sort(arr,arr+a);
        int y=0;
        for (int k = 1; k < a; k++)
        {
            if(arr[k]-arr[k-1] > 1){
                y = 1;
                break;
            }
        }
        if (y==1)
        {
            std::cout<<"NO"<<std::endl;
        }
        else
        {
            std::cout<<"YES"<<std::endl;
        }
    }
    
    return 0;
}