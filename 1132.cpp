/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	int x, y, sum = 0;

	cin >> x >> y;

	if(y < x) {
		int aux = x;
		x = y;
		y = aux;
	}

	for (; x <= y; x++)
	{
		if(x%13 != 0)
			sum += x;
	}

	cout << sum << endl;

	return 0;
}
