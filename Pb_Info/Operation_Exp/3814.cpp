#include <iostream>
#include <cmath>


int main(){

    double AB,BC,CD,AD,K,S;
    std::cin>>AB>>BC>>CD>>AD;
    S = (AB+BC+CD+AD)/2;
    K = sqrt((S-AB)*(S-BC)*(S-CD)*(S-AD));
    long long int k;
    k = (long long int)(K*1000);
    std::cout<<k/1000<<"."<<k/100%10<<k/10%10<<k%10;

    return 0;
}