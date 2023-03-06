#include <iostream>
using namespace std;

int main(){
    int userAgeYears;
    int userAgeDays;
    int userAgeMinutes;
    int totalHeartBeats;
    int avgBeatsPerMinute = 72;

    cout << "Enter your age in years: ";
    cin >> userAgeYears;

    userAgeDays = userAgeYears * 365;
    userAgeDays = userAgeDays + (userAgeYears / 4);

    cout << "You are " << userAgeDays << " days old." << endl;

    userAgeMinutes = userAgeDays * 24 * 60;
    cout << "You are " << userAgeMinutes << " minutes old." << endl;

    totalHeartBeats = userAgeMinutes * avgBeatsPerMinute;
    cout << "Your heart has beat " << totalHeartBeats << "times." << endl;

    return 0;
}