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
    int x,y,i, j;

    cin >> x>>y;

    for(i = 1; i <= y; i++){
       if(i%x==0)
       cout<<i<<endl;
       else
       cout<<i<<" ";
    }


    return 0;
}
