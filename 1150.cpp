/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,sum=0,q=0;
    cin>>x;
    do{
        cin>>z;
    }while(z<=x);
    for(; sum<z; x++,q++)
    {
        sum+=x;
    }
    cout<<q<<endl;
}
