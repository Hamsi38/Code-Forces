#include <iostream>
#include <fstream>

using namespace std;


int main(){

    ifstream input("zmeu.in");
    ofstream output("zmeu.out");

    long long N,M,x1,x2;
    input>>N>>M;

    x1 = N/(M*2);
    x2 = (M*2)-(N%(M*2));
    output<<x1<<endl<<x2;


    return 0;
}