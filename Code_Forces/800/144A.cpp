#include <iostream>
#include <climits>

int main(){

    int n;
    std::cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    int min_ind = 0, max_ind =0, result = 0,a = 0, b=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>a)
        {
            a =arr[i];
            max_ind = i;
        }
        if (arr[i] <= b)
        {
            b =arr[i];
            min_ind =i;
        }
    }
    if (arr[n-1]==b && arr[0]==a)
    {
        result = 0;
    }
    else
    {
        if (max_ind > min_ind)
        {
            result = max_ind + (n -1-min_ind)-1;
        }
        else
        {
            result = max_ind+(n -1-min_ind);
        }
        
    }
    std::cout<<result;
    return 0;
}