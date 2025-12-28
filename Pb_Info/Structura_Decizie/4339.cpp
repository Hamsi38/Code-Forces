#include <iostream>

int main(){

    int a,b,c,par=0,impar=0;
    std::cin>>a>>b>>c;
    if(a%2==0) par++;
    else impar++;
    if(b%2==0) par++;
    else impar++;
    if(c%2==0) par++;
    else impar++;

    if (par>impar)
    {
        std::cout<<"pare";
    }
    else std::cout<<"impare";
    

    return 0;
}