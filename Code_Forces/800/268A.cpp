#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,cnt=0;
    std::cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cin>>arr[i][j];
        }
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i!=j)
            {
                if (arr[i][a]==arr[j][a+1]) cnt++;
                if(arr[i][a+1]==arr[j][a]) cnt++;
            }
            
        }
        
    }
    
    std::cout<<cnt;
    return 0;
}