#include <iostream>
#include <unordered_set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int cnt=0,a;
    std::unordered_set<int> elements;
    for (int i = 0; i < 4; i++)
    {
        std::cin>>a;
        if(!elements.count(a)){
            elements.insert(a);
        }
    }
    cnt = 4-elements.size();
    std::cout<<cnt;
    return 0;
}