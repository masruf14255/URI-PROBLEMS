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
	double a,b,c,tri,ci,tra,sq,re;
	cin>>a>>b>>c;
	tri=.5*a*c;
	ci=3.14159*(c*c);
	tra=(a+b)*c/2;
	sq=(b*b);
	re=a*b;
	printf("TRIANGULO: %.3lf\n",tri);
	printf("CIRCULO: %.3lf\n",ci);
	printf("TRAPEZIO: %.3lf\n",tra);
	printf("QUADRADO: %.3lf\n",sq);
	printf("RETANGULO: %.3lf\n",re);
    return 0;
}

