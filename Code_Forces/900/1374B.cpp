#include <iostream>


using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt2=0,cnt3=0,con=0;
        cin>>n;
        while (n>1)
        {
            if (n%2==0)
            {
                n /= 2;
                cnt2++;
            }
            else if (n%3==0)
            {
                n /= 3;
                cnt3++;
            }
            else
            {
                cout<<-1<<endl;
                con=1;
                break;
            }
        }
        if (con==0)
        {
            if (cnt2>cnt3)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<(cnt3-cnt2)+cnt3<<endl;
            }
        }
        
    }
    

    return 0;
}