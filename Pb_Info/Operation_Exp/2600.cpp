#include <iostream>
#include <cmath>

int main(){

    int n ,result = 0;
    std::cin>>n;
    int equ = (n*n)+(n*n*n*n);
    result = ((3*equ)/(equ + sqrt(equ))) + (sqrt(equ));
    std::cout<<result;

    return 0;
}