#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>=b)
    {
        c=(24-a)+b;

    }
    else
        c=(b-a);

    cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
    return 0;
}
