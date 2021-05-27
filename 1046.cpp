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
	if(a==0 && b==0 || a==b)
	{
		cout<<"O JOGO DUROU 24 HORA(S)\n";
	}
	else if(a>b)
	{
		cout<<"O JOGO DUROU "<<(24-a)+b<<" HORA(S)\n";
	}
	else if(a<b)
	{
		cout<<"O JOGO DUROU "<<b-a<<" HORA(S)\n";
	}
}
