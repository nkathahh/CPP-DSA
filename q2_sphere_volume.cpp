#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    // Variable for radius
    double radius;

    // Input radius
    cout << "Enter radius of sphere: ";
    cin >> radius;

    // Calculate volume using formula (4/3)πr^3
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Output result
    cout << "Volume of sphere: " << volume << endl;

    return 0;
}