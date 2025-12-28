#include <iostream>
#include <fstream>
#include <climits>

//? in this problem i learned hwo can i find 2nd biggest from array and its index;
// also how can i count digits in number

using namespace std; 

int main(){

    ifstream input("lift.in");
    ofstream output("lift.out");

    int choice;
    input>>choice;
    int arr[10] = {0};//all counts start at 0
    int t;
    input>>t;
    if (choice==1)
    {
        // for testcase 3, 0 count 4 it must be 5 times 
        // Your code never counts the digit ‘0’ when the number itself is 0, because the loop:
        //never executes for x = 0.
        // That’s why your 0 count is 4 instead of 5.

        while (t--)
        {
            int x;
            input>>x;
            // digits count
            if(x==0) arr[x]++;
            while (x>0)
            {
                int y;
                y = x%10; 
                arr[y]++;//increase counter
                x /= 10;
            }
        }
        int value = INT_MAX;
        int index = -1;
        for (int i = 0; i < 10; i++)
        {
            if (arr[i]<value && arr[i]!=0)
            {
                value = arr[i];
                index = i;
            }
        }
        output<<index; 
    }
    else
    {
        long long k;
        while (t--)
        {
            input>>k;
            if(k==0) arr[k]++;
            while (k>0)
            {
                int b;
                b = k%10;
                arr[b]++;// increase counter
                k /= 10;
            }
        }
        int index1;
        int index2;
        int value1 = INT_MIN;
        int value2 = INT_MIN;
        for (int i = 9; i >= 0; i--)
        {
            //! 1st and 2nd biggest elemenets in array we are finding with this lines of codes 
            // iff current element is bigger the value1 we update
            if (arr[i] > value1)
            {
                // old biggest become 2nd biggest
                value2 = value1;
                index2 = index1;

                //update the biggest value and its index
                value1 = arr[i];
                index1 = i;
            }
            // if it is not the biggest , but still bigger than second biggest
            else if(arr[i]>value2)
            {
                // update the second biggest value 
                value2 = arr[i];
                index2 = i;
            }
        }
        if(index1 > index2) output<<index2<<" "<<index1;
        else output<<index1<<" "<<index2;
    }
    


    return 0;
}