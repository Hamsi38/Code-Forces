#include <iostream>
#include <algorithm>

int main(){

    int t,sum = 0, diff=0;
    std::cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        std::cin>>arr[i];
        diff += arr[i];
    }
    
    std::sort(arr, arr+t);
    sum  = t * arr[t-1];
    std::cout<<sum-diff;

    return 0;
}