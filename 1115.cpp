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
	while(true)
	{
		cin>>a>>b;

		if(a>0 && b>0)
		{
			cout<<"primeiro"<<endl;
		}
		if(a>0 && b<0)
		{
			cout<<"quarto"<<endl;
		}
		if(a<0 && b<0)
		{
			cout<<"terceiro"<<endl;
		}
		if(a<0 && b>0)
		{
			cout<<"segundo"<<endl;
		}
		if(a==0 || b==0)
		{
			break;
		}
	}
}
