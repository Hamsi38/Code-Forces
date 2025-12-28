#include <iostream>
#include <algorithm>

int main(){

    int n;
    std::cin>>n;

    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    
    std::sort(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    

    return 0;
}