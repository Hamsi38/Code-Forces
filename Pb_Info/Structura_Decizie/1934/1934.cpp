#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


int main(){

    ifstream input("elfii.in");
    ofstream output("elfii.out");

    int x,y,z;
    input>>x>>y>>z;

    int arr[6];
    arr[0] = 100*x + 10*y + z;
    arr[1] = 100*x + 10*z + y;
    arr[2] = 100*y + 10*x + z;
    arr[3] = 100*y + 10*z + x;
    arr[4] = 100*z + 10*y + x;
    arr[5] = 100*z + 10*x + y;

    if (x%2==1 && y%2==1 && z%2==1)
    {
        output<<"Poate data viitoare!";
    }
    else
    {   
        int maxim = -1,cnt = 0;
        for (int i = 0; i < 6; i++)
        {
            if(arr[i] > 99 && arr[i]%2==0)
            {
                cnt++;
                if (arr[i] > maxim) maxim = arr[i];
            }
        }
        if (cnt==0) output<<"Poate data viitoare!";
        else output<<cnt<<endl<<maxim;
        
    }


    return 0;
}