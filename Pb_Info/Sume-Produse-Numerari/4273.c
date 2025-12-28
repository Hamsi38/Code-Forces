#include <stdio.h>
// int sqr(int n);

// int main(void){

//     int n;
//     scanf("%d",&n);
//     long long sum;
//     if (n>=1)
//     {
//         int i=1;
//         sum = 1;
//         while (i<=n){
//             sum *= sqr(i);
//             i++;
//         }
//     }
    
//     printf("%lld",sum);
//     return 0;
// }

// int sqr(int n){
//     return n*n;
// }

long long int factorial(int n);

int main(void){

    int n;
    long long sum;
    scanf("%d",&n);
    if (n>0)
    {
        sum = factorial(n)*factorial(n);
    }
    
    printf("%lld",sum);
    return 0;
}

long long int factorial(int n){
    long long int nr =1;
    for (int i = 2; i <= n; i++)
    {
        nr *=i;
    }
    return nr;
}
