#include<iostream>
using namespace std;
int main(void){
    long int input,temp, n_100,n_50,n_20,n_10,n_5,n_2;
    cin >> input ;
    cout << input <<endl;

    n_100=input/100;
    temp=input%100;
    cout << n_100 <<" nota(s) de R$ 100,00" <<endl;

    n_50=temp/50;
    temp=temp%50;
    cout << n_50 <<" nota(s) de R$ 50,00" <<endl;

    n_20=temp/20;
    temp=temp%20;
    cout << n_20 <<" nota(s) de R$ 20,00" <<endl;

    n_10=temp/10;
    temp=temp%10;
    cout << n_10 <<" nota(s) de R$ 10,00" <<endl;

    n_5=temp/5;
    temp=temp%5;
    cout << n_5 <<" nota(s) de R$ 5,00" <<endl;

    n_2=temp/2;
    temp=temp%2;
    cout << n_2 <<" nota(s) de R$ 2,00" <<endl;

    cout << temp <<" nota(s) de R$ 1,00" <<endl;
    return 0;
}
