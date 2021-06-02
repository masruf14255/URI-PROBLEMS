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
	int a,b,n;
	cin>>n;
	cout.precision(1);
	while(n--)
	{
		cin>>a>>b;
		if(b==0)
			cout<<"divisao impossivel"<<endl;
		else
			cout<<fixed<<a/(double)b<<endl;
	}
}
