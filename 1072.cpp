/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <iostream>

using namespace std;

int main() {

    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        cout<<i<<"^"<<2<<" = "<<i*i<<endl;
    }

    return 0;
}
