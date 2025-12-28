#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        int a=0,b=0,y;
        for (int i = 0; i < x; i++)
        {
            cin>>y;
            if (y%2 != i%2)
            {
                if (y%2==0)
                {
                    a++;
                }
                else b++;
            }
        }
        if(a!=b) cout<<-1<<endl;
        else cout<<a<<endl;

        
    }
    

    return 0;
}