#include <iostream>

using namespace std;

int main(void){

    int n,x,cnt=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x>9 && x<100)
        {
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}