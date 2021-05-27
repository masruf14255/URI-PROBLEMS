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
    float n,m;
    cin>>n;

    if(n>=0 && n<=400.00)
    {
    	m=(n*15)/100;
    	printf("Novo salario: %.2f\n",m+n);
    	printf("Reajuste ganho: %.2f\n",m);
    	printf("Em percentual: 15 %\n");
    }
    if(n>=400.01 && n<=800.00)
    {
    	m=(n*12)/100;
    	printf("Novo salario: %.2f\n",m+n);
    	printf("Reajuste ganho: %.2f\n",m);
    	printf("Em percentual: 12 %\n");
    }
    if(n>=800.01 && n<=1200.00)
    {
    	m=(n*10)/100;
    	printf("Novo salario: %.2f\n",m+n);
    	printf("Reajuste ganho: %.2f\n",m);
    	printf("Em percentual: 10 %\n");
    }
    if(n>=1200.01 && n<=2000.00)
    {
    	m=(n*7)/100;
    	printf("Novo salario: %.2f\n",m+n);
    	printf("Reajuste ganho: %.2f\n",m);
    	printf("Em percentual: 7 %\n");
    }
    if(n>2000)
    {
    	m=(n*4)/100;
    	printf("Novo salario: %.2f\n",m+n);
    	printf("Reajuste ganho: %.2f\n",m);
    	printf("Em percentual: 4 %\n");
    }

}
