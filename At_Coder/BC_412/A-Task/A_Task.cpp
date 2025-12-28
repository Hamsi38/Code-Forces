#include <iostream>

//A - Task Failed Successfully

int main(){

    int n,aimed,completed,cnt=0;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>aimed>>completed;
        if (completed > aimed) cnt++;
    }
    std::cout<<cnt;

    return 0;
}