#include <iostream>

using namespace std;


int main(){

    int x,y;
    cin>>x>>y;
    if (x>y)
    {
        swap(x,y);
    }
    if (x%2==0 && y%2==1 && y-x==1)
    {
        cout<<"Andrei e mai responsabil";
    }
    
    else cout<<"minciuna";
    

    // Într-o carte, paginile impare sunt pe dreapta, iar cele pare pe verso (stânga).
    // Biletele pot fi puse doar între două pagini consecutive aflate pe foi diferite, adică între o pagină impară și următoarea pară.
    // Dacă paginile nu sunt consecutive sau ordinea e greșită, atunci e minciună.

    return 0;
}