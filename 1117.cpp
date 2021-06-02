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
	float avg=0.0;
	int i=0;
	float m;
	while(i<2)
	{
		cin>>m;
		if(m>=0.00 && m<=10.00)
		{
			avg+=m;
			i++;
		}
		else cout<<"nota invalida\n";
	}
	printf("media = %.2f\n",avg/2.00);
}
