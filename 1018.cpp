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
    int n;
    int a,b,c,d,e,f;
    cin>>n;
    cout<<n<<endl;
    a=n/100;
    n=n%100;
    b=n/50;
    n=n%50;
    c=n/20;
    n=n%20;
    d=n/10;
    n=n%10;
    e=n/5;
    n=n%5;
    f=n/2;
    n=n%2;
    cout<<a<<" nota(s) de R$ 100,00\n";
    cout<<b<<" nota(s) de R$ 50,00\n";
    cout<<c<<" nota(s) de R$ 20,00\n";
    cout<<d<<" nota(s) de R$ 10,00\n";
    cout<<e<<" nota(s) de R$ 5,00\n";
    cout<<f<<" nota(s) de R$ 2,00\n";
    cout<<n<<" nota(s) de R$ 1,00\n";

    return 0;
    //cout<<a<<" "<<n<<endl;

}
