#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int a,nr;
        cin>>a>>nr;
        int con = 0;
        int b;
        while (a--)
        {
            cin>>b;
            if (b==nr)
            {
                con =1;
            }
        }
        if (con)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    

    return 0;
}