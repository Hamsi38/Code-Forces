#include <iostream>
#include <fstream>

int main(){

    std::ifstream input;
    std::ofstream output;

    input.open("adunare.in");
    output.open("adunare.out");

    int a,b;
    input>>a>>b;
    output<<a+b;

    return 0;
}