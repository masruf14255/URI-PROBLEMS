#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,MEDIA;
    cin>>a>>b;
    a=a*3.5;
    b=b*7.5;
    MEDIA=(a+b)/11;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<MEDIA<<endl;
    return 0;
}

