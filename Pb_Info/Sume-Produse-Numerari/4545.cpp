#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin>>n;

    long long  sum;
    sum = (long long )pow(n,2) * pow(n+1,2)/4;
    cout<<sum;

    return 0;
}