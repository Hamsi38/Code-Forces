#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){

    ifstream input("maxim3.in");
    ofstream output("maxim3.out");

    long long a,b,c;
    input>>a>>b>>c;
    output<<max(a,max(b,c));


    return 0;
}
