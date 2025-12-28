#include <iostream>

using namespace std;

int main(){

    int t;
    char c;
    cin>>t>>c;

    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    for (int i = t; i > 0 ; i--)
    {
        
        for (int k = i; k < t; k++)
        {
            cout<<" ";
        }
        for (int j = i; j > 0 ; j--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    
    
    

    return 0;
}