#include <iostream>
#include <vector>

int main(){

    int n,sumx=0,sumy=0,sumz=0;
    std::cin>>n;
    std::vector<std::vector<int>> vec(n,std::vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin>>vec[i][j];
            if (j==0) sumx += vec[i][j];
            else if(j==1) sumy+=vec[i][j];
            else sumz += vec[i][j];
        }
    }
    if (sumx==0 && sumy==0 && sumz==0)
    {
        std::cout<<"YES";
    }
    else std::cout<<"NO";

    return 0;
}