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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0 && n>0){cout<<"EVEN POSITIVE\n";}
        else if(n%2==0 && n<0){cout<<"EVEN NEGATIVE\n";}
        else if(n%2!=0 && n>0){cout<<"ODD POSITIVE\n";}
        else if(n%2!=0 && n<0){cout<<"ODD NEGATIVE\n";}
        else
        {
            cout<<"NULL\n";
        }
    }
}
