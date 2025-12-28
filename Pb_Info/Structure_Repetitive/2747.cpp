#include <iostream>

using namespace std;

int main(){

    int n,m,cnt=0;
    cin>>n>>m;

    while (m>1)
    {
        m /= n;
        cnt++;
    }
    cout<<cnt;


    return 0;
}