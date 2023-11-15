#include <iostream>
using namespace std;

int main() {
    const int CPS = 960; // characters per second (transmit rate)
    const int MINUTE = 60; // length of one minute, in seconds
    const int HOUR = 60 * 60; // length of one hour, in seconds
    const int DAY = 60 * 60 * 24; // length of one day, in seconds
    int totalSeconds, days, hours, minutes, seconds, fileSize;
    cout << "Enter file size in bytes: ";
    cin >> fileSize;
    totalSeconds = fileSize / CPS;
    /* calculate whole days */
    days = totalSeconds / DAY;
    /* calculate remainder after whole days are consumed */
    totalSeconds = totalSeconds % DAY;
    /* calculate whole hours */
    hours = totalSeconds / HOUR;
    /* calculate remainder after whole hours are consumed */
    totalSeconds = totalSeconds % HOUR;
    /* calculate whole minutes */
    minutes = totalSeconds / MINUTE;
    /* calculate remainder after whole minutes are consumed */
    seconds = totalSeconds % MINUTE;
    cout << "It will take " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds to send the file." << endl;
    return 0;
}
