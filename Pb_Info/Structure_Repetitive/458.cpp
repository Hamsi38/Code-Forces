#include <iostream>

using namespace std;

int main(){

    int t;
    char a,b;
    cin>>t>>a>>b;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            if (i%2==1 && j%2==1) cout<<a;
            else if(i%2==1 && j%2==0) cout<<b;
            else if(i%2==0 && j%2==0) cout<<a;
            else cout<<b;
        }
        cout<<endl;
    }
    

    return 0;
}