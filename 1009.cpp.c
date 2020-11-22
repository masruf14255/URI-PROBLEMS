#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char name[30];
    double sa,pa,TOTAL;
    cin>>name;
    cin>>sa>>pa;
    TOTAL=sa+(pa*15)/100;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<TOTAL<<endl;
}

