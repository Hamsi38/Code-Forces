#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


int main(){

    ifstream input("parcare.in");
    ofstream output("parcare.out");

    int z1,l1,h1,m1;
    int z2,l2,h2,m2;
    int pret;
    int t;
    input>>z1>>l1>>h1>>m1;//intrare
    input>>z2>>l2>>h2>>m2;//iesire 
    input>>pret;
    input>>t;


    int time=0,money=0;

    if (l1==l2 && z1==z2)
    {
        time = ((h2*60)+m2)-((h1*60)+m1);
    }
    else
    {
        int prev;
        if (l1==2)
        {
            int a,b;
            a = h1*60+m1;
            b = h2*60+m2;
            prev = (28-z1)+z2-1;
            time =  prev*1440 + (a-b);
        }
        else if (l1==4 || l1==6 || l1==9 ||l1==11)
        {

        }
        else
        {
            
        }
    }
    
    

    if (t==1)
    {
        cout<<time;
    }
    else
    {
        cout<<money;
    }
    
    return 0;
}