/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c=0;
     for(int i =0; i<5; i++)
     {
         cin>>a;
         if(a%2==0)
         {
             c++;
         }
     }
     cout<<c<<" valores pares"<<endl;
     return 0;
}
