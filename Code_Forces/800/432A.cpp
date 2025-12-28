#include <iostream>
#include <algorithm>

int main(){

    int n,k,result=0;
    std::cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=5-k)
        {
            cnt++;
        }
    }
    result = cnt/3;
    std::cout<<result;

    return 0;
}