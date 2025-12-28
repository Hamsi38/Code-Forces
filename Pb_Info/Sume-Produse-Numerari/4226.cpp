#include <iostream>


int main(){
    int t,n,result =0,c1,c2,c3;
    std::cin>>t>>n;
    if (t == 1)
    {
        std::cin>>c1>>c2;
        int div1 = n/c1;
        int div2 = n/c2;
        int div12 = n/(c1*c2);
        result = n - div1 -div2 + div12;
    }
    else
    {
        std::cin>>c1>>c2>>c3;
        result  = n - (n/c1) - (n/c2) - (n/c3) + (n/(c1*c2)) + (n/(c1*c3)) + (n/(c2*c3)) - (n/(c1*c2*c3));
    }
    
    std::cout<<result;

    return 0;
}


//! this is my code down here i took 80 point 

// #include <iostream>

// int main(){

//     int n,a,c1,c2,c3,cnt=0;
//     std::cin>>n;
//     if (n == 1)
//     {
//         std::cin>>a>>c1>>c2;
//         for (int i = 1; i < a; i++)
//         {
//             if (i%c1 != 0 && i%c2 != 0) cnt++;
//         }
//     }
//     else
//     {
//         std::cin>>a>>c1>>c2>>c3;
//         for (int i = 1; i < a; i++)
//         {
//             if(i%c1 != 0 && i%c2 != 0 && i%c3 != 0) cnt++;
//         }
//     }
//     std::cout<<cnt;

//     return 0;
// }


