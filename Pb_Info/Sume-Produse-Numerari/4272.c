#include <stdio.h>
#include <math.h>
int factorial(int n);
//Se dă numărul natural nenul n. Să se determine produsul primelor n numere pare nenule.

// int main(void){

//     int n,cnt=0,x=0;
//     long long product=1;
//     scanf("%d",&n);

//     while(cnt<n){
//         x +=2;
//         product *= x;
//         cnt++;
//     }
//     printf("%lld ",product);

//     return 0;
// }

int main(void){
    int n;
    scanf("%d",&n);
    long long int product = (pow(2,n))*factorial(n);
    printf("%lld",product);
    return 0;
}

int factorial(int n){
    int x=1;
    for (int i = 2; i <= n; i++)
    {
        x *=i;
    }
    return x;
}