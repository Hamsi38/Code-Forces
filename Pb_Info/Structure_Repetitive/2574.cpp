#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    if (n==1 && m==1)
    {
        cout<<"__0_0___";
    }
    else if (n==1 && m!=1)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<"__0_0___";
        }
        
    }
    
    else
    {
        for (int i = 0; i < m; i++)
        {
            cout<<"__0_0___";
        }
        cout<<endl;
        for (int i = 0; i < n-2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<"_0___0__";
            }
            cout<<endl;
        }
        for (int i = 0; i < m; i++)
        {
            cout<<"0_____0_";
        }
        
    }
    

    

    
    return 0;
}