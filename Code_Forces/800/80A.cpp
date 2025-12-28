#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    if(a==2 && b==3) cout<<"YES";
    else if(a==3 && b==5) cout<<"YES";
    else if(a==5 && b==7) cout<<"YES";
    else if(a==7 && b==11) cout<<"YES";
    else if(a==11 && b==13) cout<<"YES";
    else if(a==13 && b==17) cout<<"YES";
    else if(a==17 && b==19) cout<<"YES";
    else if(a==19 && b==23) cout<<"YES";
    else if(a==23 && b==29) cout<<"YES";
    else if(a==29 && b==31) cout<<"YES";
    else if(a==31 && b==37) cout<<"YES";
    else if(a==37 && b==41) cout<<"YES";
    else if(a==41 && b==43) cout<<"YES";
    else if(a==43 && b==47) cout<<"YES";
    else cout<<"NO";
    

    return 0;
}