#include <iostream>
#include <cstring>

int main(){

    int p,q,n,a;

    std::cin>>n;
    int arr[n + 1];
    memset(arr,0,sizeof(arr));// also we cna use std::fill()
    std::cin>>p;
    for (int i = 1; i <= p; i++)
    {
        std::cin>>a;
        arr[a] = 1;
    }

    int b;
    std::cin>>q;
    for (int i = 1; i <= q; i++)
    {
        std::cin>>b;
        arr[b] = 1;
    }
    int con = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            con = -1;
            break;
        }
    }
    if(con == -1) std::cout<<"Oh, my keyboard!";
    else std::cout<<"I become the guy.";
    

    return 0;
}