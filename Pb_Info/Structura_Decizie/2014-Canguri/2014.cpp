#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input("canguri.in");
    ofstream output("canguri.out");

    int a1,a2,b1,b2,c1,c2;
    input>>a1>>a2>>b1>>b2>>c1>>c2;
    int jump,cang,t;
    if (a2>b2 && a2>c2) cang = a1, jump = a2 ;
    else if(b2>a2 && b2>c2) cang = b1 ,jump = b2;
    else cang = c1 , jump = c2;

    t = 800/jump;

    if(jump*t<800) t++;

    output<<cang<<endl<<t;

    return 0;
}