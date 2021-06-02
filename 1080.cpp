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
    int n,max=0,p=0;
    for(int i=1;i<=100; i++)
    {
        cin>>n;
        if(n>max){
            max=n;
            p=i;
        }
    }
    cout<<max<<endl;
     cout<<p<<endl;

}

