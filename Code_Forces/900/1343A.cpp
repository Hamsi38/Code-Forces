#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        for (int i = 2; i <= 29; i++)
        {
            int y = 0;
            y += pow(2,i)-1;
            if (a%y==0)
            {
                cout<<a/y<<endl;
                break;
            }
        }
    }
    

    return 0;
}