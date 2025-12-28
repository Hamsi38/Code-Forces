#include <iostream>

using namespace std;


int main(){

    int z,l,a;
    cin>>z>>l>>a;
    
    if(z<32 && z>0 && l<13 && l>0 ) 
    {
        if(l==2){
            if((a%400==0 || (a%4==0 && a%100!=0)) && z>=29){
                cout<<"DA";
            }
            else if(z<29 )
            {
                cout<<"DA";
            }
            else cout<<"NU";
        }
        else if(l==4 || l==9 || l==6 || l==11)
        {
            if (z<31)
            {
                cout<<"DA";
            }
            else cout<<"NU";
        }
        else
        {
            cout<<"DA";
        }
        
    }
    else cout<<"NU";


    return 0;
}