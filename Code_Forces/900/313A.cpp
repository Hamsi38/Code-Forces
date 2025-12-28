#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin>>n;
    if (n>0)
    {
        cout<<n;
    }
    else
    {
        int a,b;
        string str;
        a = n/10;
        str = to_string(n);
        str[str.size()-2] = str[str.size()-1];
        str.erase(str.size()-1,1);
        b = stoi(str);
        if (a>b)
        {
            cout<<a;
        }
        else cout<<b;
    }
    

    return 0;
}