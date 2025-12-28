#include <iostream>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,result=0;
        std::cin>>a;
        int arr[a];
        for (int j = 0; j < a; j++)
        {
            std::cin>>arr[j];
        }
        for (int k = 2; k < a; k++)
        {
            if(arr[k-2]==arr[k-1] && arr[k-2] != arr[k])
            {
                result = k;
            }
            else if (arr[k-2]==arr[k] && arr[k-2]!=arr[k-1] )
            {
                result = k-1;
            }
            else if(arr[k]==arr[k-1] && arr[k]!=arr[k-2])
            {
                result = k-2;
            }
        }
            std::cout<<result+1<<std::endl;
    }
    
    return 0;
}