#include <iostream>

int main(){

    int n,k,time =0,total=0,y=0;
    std::cin>>n>>k;
    time = 240-k;
    for (int i = 1; i <= n; i++)
    {
        total += 5*i;
        if(total <= time){
            y++;
        }
        else break;
    }
    std::cout<<y;
    return 0;
}