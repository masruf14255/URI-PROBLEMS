/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int x, i, j;

    cin >> x;

    for(i = 1; i <= x; i++){
        for(j = 0; j < 2; j++)
        cout << i << " " << (i*i)+j << " " << (i*i*i)+j << endl;
    }

    return 0;
}
