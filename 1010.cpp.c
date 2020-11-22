#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n1,u1,p1,n2,u2,p2,x,a,b;
    cin>>n1>>u1>>p1>>n2>>u2>>p2;
    a=u1*p1;
    b=u2*p2;
    x=a+b;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<x<<endl;
}

