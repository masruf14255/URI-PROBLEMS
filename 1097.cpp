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
	int i,j,n=7;
	for(int i=1; i<=9; i+=2)
	{
		for(j=n; j>=n-2; j--)
		{
			cout<<"I="<<i<<" "<<"J="<<j<<endl;
		}
		n+=2;
	}
}
