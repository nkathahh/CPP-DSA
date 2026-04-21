#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    //1 day = 24hrs, 1hr = 60 mins, 1 min = 60 seconds

    int seconds = days * 24 * 60 * 60;

    cout << "Number of seconds: " << seconds << endl;

    return 0;
}