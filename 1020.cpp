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
    int n,h,m;
    cin>>n;
    h=n/365;
    n=n%365;
    m=n/30;
    n=n%30;
    cout<<h<<" ano(s)\n";
    cout<<m<<" mes(es)\n";
    cout<<n<<" dia(s)\n";

}
