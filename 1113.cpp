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
	while(cin>>a>>b)
	{
		if(a==b)
			break;
		else if(a>b)
		{
			cout<<"Decrescente"<<endl;
		}
		else if(a<b)
		{
			cout<<"Crescente"<<endl;
		}
	}
}
