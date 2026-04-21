#include <iostream>
using namespace std;

int main() {
    // Array to store 5 values
    double values[5];

    double sum = 0;

    // Loop to input values
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];

        // Add each value to sum
        sum += values[i];
    }

    // Calculate average
    double average = sum / 5;

    // Display result
    cout << "Average of values: " << average << endl;

    return 0;
}