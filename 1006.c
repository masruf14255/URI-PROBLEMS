#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,MEDIA;
    cin>>a>>b>>c;
    a=a*2;
    b=b*3;
    c=c*5;
    MEDIA=(a+b+c)/10;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<MEDIA<<endl;
    return 0;
}

