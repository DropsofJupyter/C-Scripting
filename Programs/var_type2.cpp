#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double G = 6.673e-11;
    double M = 5.98e24;
    double accelGravity;
    double distCenter;

    distCenter = 6.4e6;

    accelGravity = (G * M) / pow(distCenter,2);

    cout << accelGravity << endl;

    return 0;
}