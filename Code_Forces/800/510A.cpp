#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,m;
    std::cin>>n>>m;
    std:: string snake(m,'#');
    for (int i = 1; i <=n; i++)
    {
        if (i%2==1)
        {
            std::cout<<snake<<std::endl;
        }
        else
        {
            std:: string row(m,'.');
            if (i%4==0)
            {
                row[0] = '#';
            }
            else
            {
                row[m-1] = '#';
            }
            std::cout<<row<<std::endl;
        }
    }
    
    return 0;
}