#include <iostream>
#include <fstream>


int main(){

    std::ifstream input;
    std::ofstream output;

    input.open("catshow.in");
    output.open("catshow.out");

    int nr,min_age = INT16_MAX;
    input>>nr;

    for (int i = 0; i < nr; i++)
    {
        int v;
        input>>v;

        int human_year;
        if(v==1) human_year = 15;
        else if(v==2) human_year =24;
        else human_year = 24+(v-2)*4;
        if(min_age>human_year) min_age = human_year;
    }
    
    output<<(min_age/10);
    
    return 0;
}