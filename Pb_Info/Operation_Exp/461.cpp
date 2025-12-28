#include <iostream>

int main(){

    int h,m,x,y;
    std::cin>>h>>m>>x>>y;
    int h1,m1,a;
    m1 = (m+y)%60;
    h1 = (((m+y)/60) + h + x)%24;
    std::cout<<h1<<" "<<m1;
    return 0;
}