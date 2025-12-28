#include <iostream>

using namespace std;

int main(){

    long long n,cnt=0;
    cin>>n;
    if(n%2==0) cnt++;
    while (n!=0)
    {
        cin>>n;
        if(n%2==0 && n!=0) cnt++;
        else if(n==0 ) break;
    }
    if (cnt==0) cout<<"NU EXISTA";
    else cout<<cnt;
    

    return 0;
}