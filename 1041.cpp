/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b &&(b+c>a)))
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    {
        a=((a+b)*c)/2;
        printf("Area = %.1f\n",a);
    }
    return 0;


}
