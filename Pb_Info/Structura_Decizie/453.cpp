#include <iostream>

using namespace std;


int main(){

    long long a,b,c,cnt=3;
    cin>>a>>b>>c;
    if(a==b && b==c) cnt = 1;
    else if(a==b && b != c) cnt = 2;
    else if(a==c && c!=b) cnt =2;
    else if(c==b && b!=a) cnt = 2;


    cout<<cnt;

    return 0;
}