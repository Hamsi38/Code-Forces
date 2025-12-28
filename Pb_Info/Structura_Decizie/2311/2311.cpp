#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input("rapunzel.in");
    ofstream output("rapunzel.out");

    long long N,M1,M2,a;
    input>>N>>M1>>M2;
    a = M1+M2;
    if (a==N)
    {
        output<<1;
    }
    else if (N%a==0)
    {
        output<<N/a;
    }
    else
    {
        output<<(N/a)+1;
    }
    

    return 0;
}