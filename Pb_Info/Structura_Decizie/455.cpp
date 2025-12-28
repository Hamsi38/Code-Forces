#include <iostream>

using namespace std;

int main(){

    int z,l,a;
    cin>>z>>l>>a;

    if (z==31 && l==12) z=1, l=1, a++;
    else if(l==2)
    {
        if (a%4==0 && a%400==0)
        {
            if (z==29) z=1, l++;
            else z++;
        }
        else 
        {
            if (z==28)
            {
                z=1, l++;
            }
            else z++;
        }
    }
    else if (l==4 || l==6 || l==9 || l==11)
    {
        if (z==30) z=1, l++;
        else z++;
    }
    else
    {
        if (z==31) z=1, l++;
        else z++;
        
    }
    
    cout<<z<<" "<<l<<" "<<a;

    return 0;
}
