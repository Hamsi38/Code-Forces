#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input("2lan.in");
    ofstream output("2lan.out");

    int n;
    input>>n;
    if (n==0)
    {
        output<<1;
    }
    
    else if (n%4==1)
    {
        output<<2;
    }
    else if (n%4==2)
    {
        output<<4;
    }
    else if (n%4==3)
    {
        output<<8;
    }
    else
    {
        output<<6;
    }
    


    return 0;
}