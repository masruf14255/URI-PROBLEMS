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
    int a[n];
    a[0]=0;
    a[1]=1;

    for(int i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
        if(i==n-1)
        {
            cout<<'\n';
        }
        else
            cout<<" ";
    }
}
