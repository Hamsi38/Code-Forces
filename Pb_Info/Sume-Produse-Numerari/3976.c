#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
we gonna use this mathematical formula for better time complexity 
? This formula calculates the product of the first n odd numbers:
? 1 × 3 × 5 × ... × (2n - 1)
Instead of multiplying each odd number one by one,
we use the factorial formula: (2n)! / (2^n × n!)
This makes the calculation more efficient and compact.
*/

// long long int factorial(long long int n);

// int main(void){

//     long long nr,result,a,b;
//     scanf("%lld",&nr);
//     if (nr>0 && nr<=15){
//         a = factorial(2*nr);
//         b = ((long long )1 <<nr) * factorial(nr);
//         result = a/b;
//         printf("%lld",result);
//     }
    
//     return 0;
// }

// long long int factorial(long long int n){
//     long long int fac =1;
//     for (int i = 1; i <= n; i++){
//         fac *= i;
//     }
//     return fac;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     long long product = 1; // We'll store the result here
//     int count = 0;         // How many odd numbers we’ve multiplied
//     int number = 1;        // Start checking from 1

//     while (count < n) {
//         product = product * number; // Multiply current odd number
//         number = number + 2;        // Go to the next odd number
//         count++;                    // We’ve used one more number
//     }

//     cout << product << endl;
//     return 0;
// }

int main(void){
    int n;
    scanf("%d",&n);

    long long product = 1 ;
    int count = 0;
    int number =1 ;

    while (count<n)
    {
        product *= number;
        number += 2;
        count++;
    }
    
    printf("%lld",product);
    return 0;
}