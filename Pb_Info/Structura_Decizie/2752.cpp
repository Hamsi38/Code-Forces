#include <iostream>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin>>a;
    int number;
    number = 10 + (a-1)/2;


    if (a%2==0) cout<<number%10;
    else cout<<number/10;
    

    return 0;
}