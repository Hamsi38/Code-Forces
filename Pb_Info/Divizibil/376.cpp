#include <iostream>
#include <cmath>


using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,sum=0;
    cin>>a;
    for (int i = 1; i < a*a; i++)
    {
        if ((int)a%i==0)
        {
            sum += i;
            if (a!=a/i)
            {
                sum += a/i;
            }
            
        }
        
    }
    cout<<sum;


    return 0 ;
}