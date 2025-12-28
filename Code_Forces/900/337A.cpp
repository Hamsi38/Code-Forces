#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> puzzles;
    int n,m,diff=0;
    std::cin>>n>>m;
    puzzles.resize(m);
    for (int i = 0; i < m; i++)
    {
        std::cin>>puzzles[i];
    }
    std::sort(puzzles.begin(), puzzles.end());
    int best = INT_MAX;
    for (int i = 0; i <= m-n; i++)
    {
        best = std::min(best,puzzles[i+n-1] - puzzles[i]);
    }
    std::cout<<best;

    return 0;
}