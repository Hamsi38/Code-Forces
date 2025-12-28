#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int arr[5][5];
    int row=2,col=2;
    int x=0,y=0, sum=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                x =i;
                y=j;
            }
        }
    }

    sum += abs(x-2)+abs(y-2);
    cout<<sum;
    
    return 0;
}

//* little bit more efficent this one 

/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, val;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if (val == 1) {
                cout << abs(i - 2) + abs(j - 2) << endl;
                return 0; // Exit immediately
            }
        }
    }

    return 0;
}
*/