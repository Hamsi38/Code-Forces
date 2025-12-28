#include <stdio.h>
#include <math.h>

int main(){

    long long n;
    scanf("%lld",&n);
    long long e  = (long long)log2(n);
    printf("%lld",e);

    return 0;
}