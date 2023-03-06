#include <iostream>
using namespace std;

int main(){
    int cur_price;
    int last_month_price;

    cin >> cur_price;
    cin >> last_month_price;

    cout << "This house is $" << cur_price << ". ";
    cout << "The change is $" << (cur_price - last_month_price) << " since last month." << endl;
    cout << "The estimate monthly mortgage is $" << ((cur_price * 0.051) / 12) << "." << endl;

    return 0;
}