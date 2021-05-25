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
    double a,b,c;
    cin>>a>>b>>c;
    if((pow(b,2)-4*a*c)<0 || 2*a==0)
    {
        cout<<"Impossivel calcular\n";
    }
    else
    {
        printf("R1 = %.5lf\n",((-b)+sqrt((pow(b,2)-4*a*c)))/(2*a));
        printf("R2 = %.5lf\n",((-b)-sqrt((pow(b,2)-4*a*c)))/(2*a));
    }

}
