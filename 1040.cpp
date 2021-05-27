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
	double a,b,c,d,Media,n,avg;
	cin>>a>>b>>c>>d;
	a=a*2;
	b=b*3;
	c=c*4;
	d=d*1;
	Media =(a+b+c+d)/10.0;
	printf("Media: %.1lf\n",Media);
	if(Media>=7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if(Media<5)
	{
		printf("Aluno reprovado.\n");
	}
	else if(Media>=5.0 && Media<=5.9)
	{
		printf("Aluno em exame.\n");
		cin>>n;
		printf("Nota do exame: %.1lf\n",n);
		avg = (Media+n)/2;

		if(avg>=5.0)
		{
			printf("Aluno aprovado.\n");
		}
		else if(avg<=4.9)
		{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n",avg);
	}
}
