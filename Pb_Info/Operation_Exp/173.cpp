#include <iostream>
#include<iomanip>

int main(){

    double x,y,z;
    std::cin>>x>>y>>z;
    double average;
    average = (x+y+z)/3;
    average = (int)(average*100)/100.;
    std::cout<<std::fixed<<std::setprecision(2)<<average;

    return 0;
}