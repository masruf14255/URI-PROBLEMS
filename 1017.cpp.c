#include<iostream>
using namespace std;
int main(void){
    double time, speed, fuel;
    cin >> time >> speed;
    fuel= (time*speed) / 12.0; // Calculating total amount of fuel spent during trip.
    printf("%.3lf\n", fuel); // Using printf() for precision.
    return 0;
}
