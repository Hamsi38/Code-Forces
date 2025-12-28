#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream input;
    ofstream output;

    input.open("specialmax.in");
    output.open("specialmax.out");
    
    int t,A=0,C=0;
    input>>t;
    t /=2;
    int nrmax = 0;
    while (t--)
    {
        int a,b,first,last;
        input>>a>>b;
        while (b>99)
        {
            b /= 10;
        }
        first = a%100;
        last = b;

        int par=0,impar=0;
        int f1,f2,l1,l2;
        f1 = first%10;
        f2 = (first/10)%10;
        l1 = last%10;
        l2 = (last/10)%10;

        if(f1%2==0) par += f1;
        else impar += f1;
        if(f2%2==0) par += f2;
        else impar += f2;
        if(l1%2==0) par += l1;
        else impar += l1;
        if(l2%2==0) par += l2;
        else impar += l2;

        int nr = 0;

        if(par>impar) nr = first*100 + last;

        if(nr > nrmax) nrmax = nr;
    }   
    output<<nrmax;

    return 0;
}