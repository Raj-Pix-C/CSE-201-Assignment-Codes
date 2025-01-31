#include <iostream>
using namespace std;

long long hms_to_secs(int hours, int minutes, int seconds) {
    return hours * 3600LL + minutes * 60LL + seconds;
}

int main() {
    int hours, minutes, seconds;
    char colon;

    while (true) {
        cout << "Enter time (format HH:MM:SS, or -1 to exit): ";
        cin >> hours;
        if (hours == -1) break;
        cin >> colon >> minutes >> colon >> seconds;

        cout << "The equivalent time in seconds is: " << hms_to_secs(hours, minutes, seconds)<< endl;
    }
    return 0;
}