#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int digitsn[3] ={n/100,(n/10)%10,n%10};
    int digitsm[3] ={m/100,(m/10)%10,m%10};

    int a,b,c;
    if (digitsn[0]>digitsm[0])
    {
        a = 10*digitsm[0]+digitsn[0];
    }
    else a = 10*digitsn[0]+digitsm[0];

    if (digitsn[1]!=0 && digitsm[1]!=0)
    {
        if (digitsn[1]>digitsm[1])
        {
            b = digitsm[1]*10+digitsn[1];
        }
        else b= digitsn[1]*10+digitsm[1];
    }
    else
    {
        if (digitsn[1]==0 && digitsm[1]!=0)
        {
            b = digitsm[1]*10;
        }
        else if (digitsn[1]!=0 && digitsm[1]==0)
        {
            b = digitsn[1]*10;
        }
    }

    if (digitsn[2]==0 && digitsm[2]!=0)
    {
        
    }
    else
    {
        
    }
    
    

    return 0;
}