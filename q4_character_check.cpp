#include <iostream>
using namespace std;

// Function to check character case
void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter" << endl;
    }
    else {
        cout << "Not an alphabet character" << endl;
    }
}

int main() {
    char ch;

    // Input character
    cout << "Enter a character: ";
    cin >> ch;

    // Call function to check case
    checkCase(ch);

    return 0;
}