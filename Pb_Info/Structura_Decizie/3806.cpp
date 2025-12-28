#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double AB,BC,AC,ma,mb,mc;
    cin>>AB>>BC>>AC;
    if (AB+BC >= AC && BC+AC >= AB && AB+AC >= BC)
    {
        ma = (sqrt(2*(BC*BC)+2*(AC*AC)-AB*AB))/2;
        mb = (sqrt(2*(AB*AB)+2*(AC*AC)-BC*BC))/2;
        mc = (sqrt(2*(AB*AB)+2*(BC*BC)-AC*AC))/2;

        ma = (int)(ma*100)/100.;
        mb = (int)(mb*100)/100.;
        mc = (int)(mc*100)/100.;

        cout<<fixed<<setprecision(2)<<ma<<" "<<mb<<" "<<mc;
    }
    else cout<<"Imposibil";

    return 0;
}