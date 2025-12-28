#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    int a,b,c;
    std::cin>>c>>a>>b;
    double area=0,ha=0,hb=0,hc=0,p=0;

    p = (a+b+c)/2.0;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    if(area ==0 || a+b < c || b+c<a || c+a<b){
        std::cout<<"Imposibil";
    }
    else
    {
        ha = (2*area)/a;
        hb = (2*area)/b;
        hc = (2*area)/c;

        double x,y,z;
        x = (int)(ha*100)/100.;
        y = (int)(hb*100)/100.;
        z = (int)(hc*100)/100.;
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<x<<" "<<y<<" "<<z;
    }

    return 0;
}