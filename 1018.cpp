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
    h=n/3600;
    n=n%3600;
    m=n/60;
    n=n%60;
    cout<<h<<":"<<m<<":"<<n<<endl;

}
