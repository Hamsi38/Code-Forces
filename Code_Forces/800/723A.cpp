#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector <int> vec;
    int n;

    for (int i = 0; i < 3; i++)
    {
        std::cin>>n;
        vec.push_back(n);
    }
    
    std::sort(vec.begin(), vec.end());

    int result = 0;
    result = (vec[2]-vec[1])+(vec[1]-vec[0]);
    std::cout<<result;

    return 0;
}