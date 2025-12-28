#include <iostream>
#include <string>
#include <vector>

int main(){

    int a,b;
    std::cin>>a>>b;
    std::vector <std::string> grid(a);
    for (int i = 0; i < a; i++)
    {
        std::cin>>grid[i];
    }
    

    return 0;
}