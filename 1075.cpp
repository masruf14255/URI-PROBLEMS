/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=10000; i++)
    {
        if(i%n==2)
        {
            cout<<i<<endl;
        }
    }
}
