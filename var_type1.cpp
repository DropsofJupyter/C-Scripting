#include <iostream>
using namespace std;

int main() {

    cout << "Default output of pi: " << M_PI << endl;
    cout << "pi reduced to 4 digits after the decimal: ";
    cout << fixed << setprecision(4) << M_PI << endl;

    return 0;
}