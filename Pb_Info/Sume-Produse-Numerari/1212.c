#include <stdio.h>

int main(){
    // we solved with modular arithmetic 
    // and also we cna solve with loop, less efficient but more understandable 
    const int M = 10234573;

    long long int n,sum=0,x;
    scanf("%lld",&n);

    long long int A = n;
    long long int B = n+1;
    long long int C = 2*n+1;

    if(A%2==0) A /= 2;
    else if(B%2==0) B /= 2;
    else C /= 2;

    if(A%3==0) A/=3;
    else if(B%3 == 0) B/=3;
    else C/=3;

    long long int result = ((A%M)*(B%M)%M)*(C%M)%M;

    printf("%lld",result);

    return 0;
}

