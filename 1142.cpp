/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int x, i;

    cin >> x;

    for(i = 1; i <= x*4; i++){
        if(i%4 == 0)
            cout << "PUM" << endl;
        else
            cout << i << " ";
    }

    return 0;
}

