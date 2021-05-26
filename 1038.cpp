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

     int a,b,c;
     cin>>a>>b>>c;
     if(a<b)
     {
     	if(a<c)
     	{
     		if(b<c)
     		{
     			printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,a,b,c);
     		}
     		else
     			printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,c,b,a,b,c);

     	}
     }
    if(b<c)
     {
     	if(b<a)
     	{
     		if(c<a)
     		{
     			printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,c,a,a,b,c);
     		}
     		else
     			printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,a,c,a,b,c);
     	}
     }
    if(c<a)
     {
     	if(c<b)
     	{
     		if(a<b)
     		{
     			printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,a,b,a,b,c);
     		}
     		else
     			printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,b,a,a,b,c);
     	}
     }


}
