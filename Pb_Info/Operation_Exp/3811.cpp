#include <iostream>
#include <cmath>
#include <iomanip>


int main(){

    double a,b,c;
    std::cin>>c>>a>>b;

    if (a+b <= c || b+c <= a || a+c <= b)
    {
        std::cout<<"Imposibil";
    }
    else
    {
        double la=0,lb=0,lc=0;
        la = sqrt(b*c*((b+c)*(b+c)-a*a))/(b+c);
        lb = sqrt(a*c*((a+c)*(a+c)-b*b))/(a+c);
        lc = sqrt(a*b*((a+b)*(a+b)-c*c))/(a+b);

        lc = (int)(lc*100)/100.;
        lb = (int)(lb*100)/100.;
        la = (int)(la*100)/100.;
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<lc<<" "<<la<<" "<<lb;
    }
    
    return 0;
}