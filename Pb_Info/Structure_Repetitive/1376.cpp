#include <iostream>

using namespace std;


int main(){

    int t,y;
    cin>>t;
    if (t==1)   cout<<"*";
    else
    {
        y = t-1;
        while (y--) cout<<" ";
        cout<<"*"<<endl;

        for (int i = 2; i < t; i++)
        {
            for (int j = 0 ; j < t-i; j++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int j = 0; j < 2*i-3; j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        

        for (int i = 0; i < t; i++)
        {
            cout<<"*"<<" ";
        }
    }
    
    

    return 0;
}