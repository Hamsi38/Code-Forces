#include <iostream>

int main(){

    int n,subsegment = 1, temp =1;
    std::cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] <= arr[i+1])
        {
            temp++;
        }
        else
        {
            temp =1 ;
        }
        if (temp >= subsegment)
        {
            subsegment = temp;
        }
        
    }
    
    std::cout<<subsegment;

    return 0;
}