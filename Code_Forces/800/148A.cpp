#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k,l,m,n,d,cnt=0;
    std::cin>>k>>l>>m>>n>>d;

    for (int i = 1; i <= d; i++)
    {
        if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0)){
            cnt++;
        }
    }
    std::cout<<d-cnt;
    return 0;
}