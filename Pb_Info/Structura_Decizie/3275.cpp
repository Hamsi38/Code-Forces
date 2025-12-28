#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a,b,c,suma,sumb,sumc,max_sum;
    cin>>a>>b>>c;
    suma = (a/10)+(a%10);
    sumb = (b/10)+(b%10);
    sumc = (c/10)+(c%10);
    max_sum = max({suma,sumb,sumc});

    if (suma==max_sum && sumb==max_sum && sumc==max_sum)
    {
        cout<<a<<" "<<b<<" "<<c;
    }
    else if (suma==max_sum && sumb==max_sum && sumc!=max_sum)
    {
        cout<<a<<" "<<b;
    }
    else if (sumb==max_sum && sumc==max_sum && suma!=max_sum)
    {
        cout<<b<<" "<<c;
    }
    else if (suma==max_sum && sumc==max_sum && sumb!=max_sum) 
    {
        cout<<a<<" "<<c;
    }
    else if (suma==max_sum && sumc!=max_sum && sumb!=max_sum)
    {
        cout<<a;
    }
    else if (suma!=max_sum && sumc!=max_sum && sumb==max_sum)
    {
        cout<<b;
    }
    else if (suma!=max_sum && sumc==max_sum && sumb!=max_sum)
    {
        cout<<c;
    }
    
    
    return 0;
}