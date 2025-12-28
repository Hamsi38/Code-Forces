#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int cnt=0;
    int a,b,c;
    a = n%10;
    b = (n/10)%10;
    c= n/100;
    if(a!=0 &&m%a==0) cnt++;
    if(b!=0 && m%b==0) cnt++;
    if(c!=0 && m%c==0) cnt++;
    cout<<cnt;


    return 0;
}