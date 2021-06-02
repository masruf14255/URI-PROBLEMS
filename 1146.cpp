/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[])
{
    int x, i;

    while(cin >> x && x != 0){
        for(i = 1; i <= x; i++) {
            if(i == x)
                cout << i << endl;
            else
                cout << i << " ";
        }
    }

    return 0;
}

