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
	int a,b;
	cin>>a>>b;
	if(max(a,b)%min(a,b)==0)
	{
		cout<<"Sao Multiplos\n";
	}
	else
	{
		cout<<"Nao sao Multiplos\n";
	}
}
