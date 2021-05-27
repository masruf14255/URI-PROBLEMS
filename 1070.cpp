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
	int val,q;
	while(cin>>val){
		q=0;
		do{
			if(val%2!=0){
				cout<<val<<endl;
				q++;
			}
			val++;
		}while(q!=6);
	}

	return 0;
}
