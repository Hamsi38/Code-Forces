#include <iostream>

int main(){

    int n;
    std::cin>>n;
    int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0]+arr[i][1]==arr[i][2]) std::cout<<"YES";
        else if(arr[i][1]+arr[i][2]==arr[i][0]) std::cout<<"YES";
        else if(arr[i][0]+arr[i][2]==arr[i][1]) std::cout<<"YES";
        else std::cout<<"NO";
        std::cout<<std::endl;
    }
    
    return 0;
}