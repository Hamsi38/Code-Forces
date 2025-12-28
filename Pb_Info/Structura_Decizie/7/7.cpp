#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int a,b;

    ifstream input("maxim.in");
    ofstream output("maxim.out");

    input>>a>>b;
    if (a>b)
    {
        output<<a;
    }
    else output<<b;
    

    return 0;
}