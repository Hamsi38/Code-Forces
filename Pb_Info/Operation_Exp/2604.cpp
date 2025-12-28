#include <iostream>

int main(){

    int n,new_nr=0;
    std::cin>>n;
    new_nr += (n%10)*10;
    new_nr += (n/10);
    std::cout<<new_nr*new_nr;
    return 0;
}