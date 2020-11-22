#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    int i,j,n,ck=0;

    cin>>a;
    n = a;
    b = a - (int)a;
    int a1=0,a2=0,a3=0,a4=0,a5=0;

        cout<<"NOTAS:"<<endl;
        ck = n/100;
        printf("%d nota(s) de R$ 100.00\n", ck);
        n%=100;

        ck = n/50;
        printf("%d nota(s) de R$ 50.00\n", ck);
        n%=50;

        ck = n/20;
        printf("%d nota(s) de R$ 20.00\n", ck);
        n%=20;

        ck = n/10;
        printf("%d nota(s) de R$ 10.00\n", ck);
        n%=10;

        ck = n/5;
        printf("%d nota(s) de R$ 5.00\n", ck);
        n%=5;

        ck = n/2;
        printf("%d nota(s) de R$ 2.00\n", ck);
        n%=2;
        //cout<<n<<" "<<b<<endl;
        n*=100;
        //cout<<n<<endl;
        n += (double)b*100;
        //cout<<n<<endl;

        cout<<"MOEDAS:"<<endl;
        ck = n/100;
        printf("%d moeda(s) de R$ 1.00\n", ck);
        n%=100;

        ck = n/50;
        printf("%d moeda(s) de R$ 0.50\n", ck);
        n%=50;

        ck = n/25;
        printf("%d moeda(s) de R$ 0.25\n", ck);
        n%=25;

        ck = n/10;
        printf("%d moeda(s) de R$ 0.10\n", ck);
        n%=10;

        ck = n/5;
        printf("%d moeda(s) de R$ 0.05\n", ck);
        n%=5;

        ck = n/1;
        printf("%d moeda(s) de R$ 0.01\n", ck);
        n%=1;


}
