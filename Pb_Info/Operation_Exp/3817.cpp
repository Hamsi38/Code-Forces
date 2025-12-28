#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;


int main(){

    double a,b,c,d;
    cin>>a>>d>>b>>c;//AB BC CD AD
    double h,A,x;
    x = (((c*c-d*d+((b-a)*(b-a))))/(2*(b-a)));
    h =sqrt(c*c - x*x);

    if (h<=0 || fabs(b-a) > c+d || a==b ) cout<<"Imposibil"; // a==b lipsea Cazul AB = CD
    else
    {
        A = ((a+b)*h)/2;
        A = (long long)(A*100)/100.;
        cout<<fixed<<setprecision(2)<<A;
    }
    
    

    return 0;
}