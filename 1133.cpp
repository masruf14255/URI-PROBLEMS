/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int x, y;

    cin >> x >> y;

    if(y < x){
        int aux = x;
        x = y;
        y = aux;
    }

    for(x++; x < y; x++){
        if(x%5 == 2 || x%5 == 3)
            cout << x << endl;
    }

    return 0;
}
