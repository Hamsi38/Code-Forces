#include <iostream>


int main(){

    int n,j=0;
    std::cin>>n;
    int gifts[n],arr[n];


    for (int i = 0; i < n; i++)
    {
        std::cin>>gifts[i];
    }
    // 2 3 4 1
    // i used extra variable here better ersion is i = 0; int receiver = gifts[i]-1; arr[receiver]
    for (int i = 1; i <= n; i++)
    {
        arr[gifts[j]-1] = i;
        j++; 
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    

    return 0;
}