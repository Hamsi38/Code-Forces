#include <iostream>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        long long k,n,x;
        cin>>n>>k>>x;
        if (k>n) cout<<"NO"<<endl;
        else
        {
            long long minsum=0, maxsum=0;
            minsum = (k*(k+1))/2;
            maxsum = (k*(2*n-k+1))/2; 
            if(minsum<=x && x<=maxsum) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    
//!defterde yazili

    return 0;
}