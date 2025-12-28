#include <iostream>
#include <string>


using namespace std;

int main(){

    long long n,k,cnt=0;
    cin>>n>>k;
    string str = "1";
    while (n>1)
    {
        n /= 10;
        cnt++;
    }

    while (k--)
    {
        for (int i = 0; i < cnt; i++)
        {
            str += '0';
        }
    }
    cout<<str;


    return 0;
}
