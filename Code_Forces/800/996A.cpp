#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,x=0;
    std::cin>>n;
    int arr[5] = {1,5,10,20,100};
    for (int i = 4; i >=0; i--)
    {
        while (n >= arr[i])
        {
            n -= arr[i];
            x++;
        }
        
    }
    std::cout<<x;
    return 0;
}