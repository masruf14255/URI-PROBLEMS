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
	int p1,u1,p2,u2;
	double m1,m2,t1,t2;
	cin>>p1>>u1>>m1;
	cin>>p2>>u2>>m2;
	t1=u1*m1;
	t2=u2*m2;
	printf("VALOR A PAGAR: R$ %.2lf\n",t1+t2);
}
