/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0,f=0,g;
    double x,y,z;
    char m[2];
    cin>>a;
    while(a--)
    {

    scanf("%d %s",&c,&m);
    if(m[0]=='C') d+=c;
    else if(m[0]=='R') e+=c;
    else if(m[0]=='S') f+=c;
    }
    g=d+e+f;
    x=(d/(g*1.0))*100.00;
    y=(e/(g*1.0))*100.00;
    z=(f/(g*1.0))*100.00;
    printf("Total: %d cobaias\n",g);
    printf("Total de coelhos: %d\n",d);
    printf("Total de ratos: %d\n",e);
    printf("Total de sapos: %d\n",f);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}
