#include <iostream>
#include <fstream>

int main(){

    std::ifstream input;
    std::ofstream output;

    input.open("cmmdc.in");
    output.open("cmmdc.out");

    int a,b;
    input>>a>>b;

    int common_divisor = 0,x =0;
    if(a>b) x = b;
    else x = a;

    if (a == 0 && b != 0) output<<b;
    else if(a !=0 && b ==0) output<<a;
    else
    {
        for (int i = 1; i <= x; i++)
        {
            if(a%i==0 && b%i==0){
                if(i>=common_divisor){
                    common_divisor =i;
                }
            }
        }
        if (common_divisor == 1)
        {
            output<<0;
        }
        else{
            output<<common_divisor;
        }
    }
    
    return 0;
}
