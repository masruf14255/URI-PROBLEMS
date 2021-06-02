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
    int t;
    float av=0;
    cin>>t;
    while(t--)
    {
        float a,b,c;
        cin>>a>>b>>c;
        a=a*2;
        b=b*3;
        c=c*5;
        av=(a+b+c)/10.0;
        printf("%.1f\n",av);
    }
}
