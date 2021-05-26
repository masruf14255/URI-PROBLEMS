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
    int n,m;
    cin>>n>>m;
    switch(n)
    {
    case 1:
        printf("Total: R$ %.2lf\n",4.00*m);
        break;
    case 2:
        printf("Total: R$ %.2lf\n",4.50*m);
        break;
    case 3:
        printf("Total: R$ %.2lf\n",5.00*m);
        break;
    case 4:
        printf("Total: R$ %.2lf\n",2.00*m);
        break;
    case 5:
        printf("Total: R$ %.2lf\n",1.50*m);
        break;
    }
}
