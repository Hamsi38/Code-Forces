#include <iostream>

int main(){

    int Y,W,up=0,down=6,big;
    std::cin>>Y>>W;
    if (Y>W) big = Y;
    else big = W;

    up = 6-big+1;
    if (up==down)
    {
        std::cout<<1<<"/"<<1;
    }
    else if(up%2==0)
    {
        up /= 2;
        down /= 2;
        std::cout<<up<<"/"<<down;
    }
    else if (up%3==0)
    {
        up /= 3;
        down /= 3;
        std::cout<<up<<"/"<<down;
    }
    else
    {
        std::cout<<up<<"/"<<down;
    }
    

    return 0;
}