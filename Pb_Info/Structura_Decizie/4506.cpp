#include <iostream>

using namespace std;

int main(){

    int a,b,c,result=0;
    cin>>a>>b>>c;

    int x,y,z;
    x = a*b+c;
    y = a*c+b;
    z = c*b+a;

    if (x>y && x>z) cout<<x;
    else if(y>x && y>z) cout<<y;
    else cout<<z;
    

    

    return 0;
}

/*
Poți forma doar 3 expresii posibile (pentru că alegi două la înmulțire și unul la adunare):
	1.	a·b + c
	2.	a·c + b
	3.	b·c + a

🔍 Strategia rapidă:
	•	Calculezi cele trei rezultate.
	•	Alegi valoarea cea mai mare dintre ele.

Asta e tot.
Nu există altă combinație posibilă, deci nu trebuie să cauți altceva.

*/