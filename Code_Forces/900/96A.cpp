#include <iostream>
#include <string>


int main(){

    std::string players;
    std::cin>>players;

    int len = players.length();
    int cnt=1;

    if (len<7)
    {
        std::cout<<"NO";
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (players[i-1]==players[i])
            {
                cnt++;
                if (cnt>=7)
                {
                    break;
                }
            }
            else
            {
                cnt=1;
            }
        }
        if (cnt>=7)
        {
            std::cout<<"YES";
        }
        else
        {
            std::cout<<"NO";
        }
    }
    
    return 0;
}
