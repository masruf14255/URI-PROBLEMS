/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	double n,m,a;
	for(int i=1; i<=6; i++)
	{
		cin>>n;
		if(n>0)
		{
			m++;
			a=a+n;
		}
	}
	cout<<m<<" valores positivos"<<endl;
	printf("%.1lf\n",a/m);

}
