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
	int a,b,sum=0;
	cin>>a>>b;

	while(b<=0)
	{
		cin>>b;
		for(int i=1; i<=b; i++)
		{
			sum = sum+a;
			a++;
		}

	}
	cout<<sum<<endl;
}
