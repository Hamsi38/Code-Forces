#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input("coada2.in");
    ofstream output("coada2.out");

    long long x,y,z;
    input>>x>>y>>z;

    if (y>=x+1 && z>=x+1)
    {
        output<<y+z-x;
    }
    else output<<-1;

    return 0;
}