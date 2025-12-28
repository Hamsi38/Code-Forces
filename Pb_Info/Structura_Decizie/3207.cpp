#include <iostream>
#include <cmath>

using namespace std;

int main(){

    long double r1,x1,y1,r2,x2,y2,d,a,b;
    long double eps = 1e-9;
    cin>>r1>>x1>>y1>>r2>>x2>>y2;
    a = x2-x1;
    b = y2-y1;
    d = sqrt(a*a+b*b);

    long double diff = fabs(r1-r2);
    long double sum = r1+r2;

    if (d==0 && r1==r2) cout<<"infinit";//coicidente
    else if (d==sum) cout<<1; // tangente exterior
    else if(d==diff) cout<<1; // tangente exterior;
    else if(diff<d && d<sum) cout<<2; // se interesecteaza in 2 puncte
    else cout<<0; // toate celelalte cazurile 
    
    //! sadece formulle cozulebilirbu problem dikkat

    return 0;
}