#include <iostream>
using namespace std;

// Function to calculate area
double area(double side) {
    return side * side;
}

// Function to calculate perimeter
double perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    // Input side length
    cout << "Enter side length of square: ";
    cin >> side;

    // Display results using functions
    cout << "Area: " << area(side) << endl;
    cout << "Perimeter: " << perimeter(side) << endl;

    return 0;
}