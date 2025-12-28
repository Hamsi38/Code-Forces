#include <stdio.h>

int main(){

    long long n,k,sum=0;
    scanf("%lld%lld",&n,&k);

    long long base_sum = 0;
    base_sum = (k-1) * k/2; // remainders we add

    long long fit = n/k;
    long long rest = n%k;

    sum = base_sum * fit + (rest * (rest+1))/2;
    
    printf("%lld",sum);

    return 0;
}