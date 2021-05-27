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
    /*int h,h1,m,m1;
    cin>>h>>m>>h1>>m1;
    if(((h==0 && h1==0) && (m==0 &&m1==0)) || ((h==h1) && (m=m1)))
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    }
    else if(m<m1)
    {
        if(h>h1)//8,9-7,10
        {
            cout<<"O JOGO DUROU "<<(24-h)+h1<<" HORA(S) E "<<m1-m<<" MINUTO(S)\n";
        }
        else
        {
            cout<<"O JOGO DUROU "<<h1-h<<" HORA(S) E "<<m1-m<<" MINUTO(S)\n";
        }
    }
    else if(m>m1)
    {
        if(h>h1)//8,9-7,10
        {
            cout<<"O JOGO DUROU "<<((24-h)+h1)-1<<" HORA(S) E "<<(60-m)+m1<<" MINUTO(S)\n";
        }
        else
        {
            cout<<"O JOGO DUROU "<<(h1-h)-1<<" HORA(S) E "<<(60-m)+m1<<" MINUTO(S)\n";
        }
    }*/

    int a,b,c,d,x,y;
    cin>>a>>x>>b>>y;
    if(a==y && b==y && y==x){
        c=x-y; d=24+a-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else
        if(a==b && y>x)
        {
            c=y-x;
            d=a-b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(a==b && x>y){
            c=60-x+y;
            d=24-a+b-1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(x==y && a<b){
            c=0; d=b-a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(x==y && a>b){
            c=0;
            d=24-a+b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(b>a && y>x){
            c=y-x;
            d=b-a;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(a<b && x>y){
            c=60-x+y;
            d=b-a-1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(a>b && x<y){
            c=y-x;
            d=24-a-1+b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    else
        if(a>b && x>y){
            c=60+y-x;
            d=24+b-a-1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
        }
    return 0;
}
