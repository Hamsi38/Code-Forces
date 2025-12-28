#include <iostream>
#include <algorithm>

int main(){

    int n,cnt=0,sum=0,total=0;
    std::cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
        sum += arr[i];
    }
    std::sort(arr,arr+n,std::greater<int>());

    for (int j = 0; j < n ; j++)
    {
        total +=arr[j];
        cnt++;
        if (total >sum/2) // i jsut made mistake in order of this if condition
        {
            std::cout<<cnt;
            break;
        }
    }

    return 0;
}