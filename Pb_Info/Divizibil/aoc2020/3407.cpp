#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

using ll = long long ;

ll lcm(ll a, ll b);
ll gcd(ll a,ll b);

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream input("aoc2020.in");
    ofstream output("aoc2020.out");

    int n;
    input>>n;

    long long result;
    input>>result;
    while (n--)
    {
        long long a;
        input>>a;
        result = lcm(result,a);
    }
    output<<result;
    return 0;
}

//Euclidean algorithm
ll gcd(ll a, ll b){
    return (b==0) ? a : gcd(b,a%b);
}

//Product divided by GCD
ll lcm(ll a, ll b){
    return (a/ gcd(a,b))*b;
}