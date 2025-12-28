#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin>>n;
    string ten = "1";
    while (n--)
    {
        ten += '0';
    }
    cout<<ten;

    return 0;
}