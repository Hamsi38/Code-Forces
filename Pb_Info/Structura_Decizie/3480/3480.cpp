#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;
int main(){

    int n;

    ifstream input("9lan.in");
    ofstream output("9lan.out");

    input>>n;
    if(n==0 || n%2==0) output<<1;
    else output<<9;

    return 0;
}