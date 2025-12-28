#include <stdio.h>
#include <math.h>

// Să se scrie un program care citește numărul natural n și determină suma S=1^1+2^2+ ... + n^n .
// we can use his formula n(n+1)(n+2)/6
long long int power(int x, int y);

int main(void){

    int n;
    scanf("%d",&n);

    long long int sum=0;

    for (int i = 1; i <= n; i++)
    {
        sum += power(i,i);// instead of this i used pow function but it gives me 80 point 
    }
    
    printf("Rezultatul este %lld", sum);

    return 0;
}

long long int power(int x, int y){
    long long int result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

