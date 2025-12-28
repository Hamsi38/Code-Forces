#include <iostream>
#include <unordered_set>

bool check_digits(int n);

int main(){

    int n;
    std::cin>>n;

    int i = n;

    while (i++)
    {
        if (check_digits(i))
        {
            std::cout<<i;
            break;
        }
    }
    


    return 0;
}

bool check_digits(int n){
    std::unordered_set<int> digits;
    while (n>0)
    {
        int d = n%10;
        if(digits.count(d)) return false;
        digits.insert(d);
        n/=10;
    }
    return true;
}