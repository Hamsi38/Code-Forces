#include <iostream>

using namespace std;

int main(){

    int R,G,B,diff1,diff2,diff3;
    cin>>R>>G>>B; 

    diff1 = abs(R-G);
    diff2 = abs(G-B);
    diff3 = abs(R-B);

    if ((0<=R && R<=255)&&(0<=G && G<=255) && (0<=B && B<=255))
    {
        if (diff1 <= 10 && diff2 <= 10 && diff3 <= 10)
        {
            cout<<"GRI";
        }
        else cout<<"CULOARE";
    }
    else cout<<"NU E CULOARE";
    

    return 0;
}