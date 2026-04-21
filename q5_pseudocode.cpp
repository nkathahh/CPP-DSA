#include <iostream>
using namespace std;

int main() {
    // Initialize variables as given in pseudocode
    double x = 0;
    double y = 20;

    // Repeat loop until condition is met
    do {
        // Subtract 4 from y
        y = y - 4;

        // Add 2/y to x
        x = x + (2 / y);

    } while (y >= 6); // Continue until y is less than 6

    // Display final result
    cout << "Final value of x: " << x << endl;

    return 0;
}