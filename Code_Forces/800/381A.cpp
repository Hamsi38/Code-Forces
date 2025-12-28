#include <iostream>
#include <vector>

int main(){

    int n,k;
    std::cin>>n;
    std::vector <int> v;
    for (int i = 0; i < n; i++)
    {
        std::cin>>k;
        v.push_back(k);
    }
    int S =0 ,D =0, a = n-1,b=0,counter =0;
    for (int i = 0; i < n; i++)
    {
        if(counter%2==0)
        {
            counter++;
            if (v[a] > v[b])
            {
                S += v[a];
                a--;
            }
            else
            {
                S += v[b];
                b++;
            }
        }
        else
        {
            counter++;
            if (v[a]>v[b])
            {
                D += v[a];
                a--;
            }
            else
            {
                D += v[b];
                b++;
            }
        }
    }
    std::cout<<S<<" "<<D;
    return 0;
}

// i just asked chatgpt for explanation i didnt understand at all