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
	int n,a,b,t,i,j;
	cin>>n;
	for(j=0; j<n; j++)
	{
		cin>>a>>b;
		t=0;

	if(b<a)
	{
		int temp = b;
		b=a;
		a=temp;
	}
	for(i=a+1; i<b; i++)

		if(i%2!=0)
			t+=i;

		cout<<t<<endl;
	}
}
