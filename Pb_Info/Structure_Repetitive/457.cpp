#include <iostream>

using namespace std;

int main(){

    int t;
    char a,b;
    cin>>t>>a>>b;

    for (int i = 0; i < t; i++)
    {
        cout<<a;
    }
    cout<<endl;
    for (int i = 1; i < t-1; i++)
    {
        cout<<a;
        for (int j = 1; j <= t-2; j++)
        {
            cout<<b;
        }
        cout<<a<<endl;
    }
    for (int i = 1; i <= t; i++)
    {
        cout<<a;
    }
    
    return 0;
}