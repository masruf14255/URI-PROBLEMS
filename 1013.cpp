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
    int a,b,c,d,m;
    cin>>a>>b>>c;
    d=(a+b+abs(a-b))/2;
    m=(d+c+abs(d-c))/2;
    printf("%d eh o maior\n",m);
    return 0;
}

