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
	float f;
	cin>>f;
	if(f<0 || f>100) printf("Fora de intervalo\n");
	else if(f>=0 && f<=25.00)printf("Intervalo [0,25]\n");
	else if(f>=25.00001 && f<=50.00000000)printf("Intervalo (25,50]\n");
	else if(f>=50.0000001 && f<= 75.0000000)printf("Intervalo (50,75]\n");
	else if(f>= 75.0000001 && f<=100.0000000)printf("Intervalo (75,100]\n");

}
