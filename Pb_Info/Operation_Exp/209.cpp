#include <iostream>

int main(){

    int n,nr=0;
    std::cin>>n;
    nr += (n/100)*10;
    nr += n%10;
    std::cout<<nr;
    return 0;
}