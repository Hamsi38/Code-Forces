#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double AB,BC,AC;
    std::cin>>AB>>BC>>AC;

    if (AB+BC>AC && BC+AC>AB && AB+AC>BC)
    {
        double cosA,cosB,cosC,A,B,C;
        int a,b,c;
        cosA = (AB*AB+AC*AC-BC*BC)/(2*AC*AB);
        cosB = (BC*BC+AB*AB-AC*AC)/(2*AB*BC);
        cosC = (AC*AC+BC*BC-AB*AB)/(2*BC*AC);

        A = (acos(cosA))*180/M_PI;
        B = (acos(cosB))*180/M_PI;
        C = (acos(cosC))*180/M_PI;

        a = (A*100);
        b = (B*100);
        c = (C*100);

        std::cout<<a/100<<"."<<a/10%10<<a%10<<" ";
        std::cout<<b/100<<"."<<b/10%10<<b%10<<" ";
        std::cout<<c/100<<"."<<c/10%10<<c%100;
    }
    else
    {
        std::cout<<"Imposibil";
    }
    
    return 0;
}