#include <iostream>
#include <fstream>

using namespace std;

long long sum(long long  n);


int main(){

    ifstream inFile;// input file
    ofstream outFile; // output file 

    inFile.open("sumagauss2.in");
    outFile.open("sumagauss2.out");


    long long nr;
    inFile >> nr;

    for (int i = nr*nr; i >=0; i--)
    {
        for (int j = nr*nr; j >=0; j--)
        {
            if(sum(i)-sum(j) == nr){
                outFile<<i<<" "<<j<<endl;
            }
        }
    }
    
    return 0;
}

long long sum(long long n){
    return n*(n+1)/2;
}