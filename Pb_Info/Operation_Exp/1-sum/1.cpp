#include <iostream>
#include <fstream>


int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::ifstream input("sum.in");
    std::ofstream output("sum.out");

    int a,sum=0;
    while (input>>a)
    {
        sum += a;
    }
    
    output<<sum;

    return 0;
}