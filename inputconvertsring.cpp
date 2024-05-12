#include <iostream>
#include <limits>
using namespace std;

int main() {
    int x;
    char str[80];

    cout << "Enter a number: ";
    cin >> x;

    // Check if input for x failed
    if (cin.fail()) {
        cerr << "Error: Invalid input for number.\n";
        return 1;
    }

    // Clear input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter a string: ";
    cin.getline(str, 80);

    // Check if input for string failed
    if (cin.fail()) {
        cerr << "Error: Invalid input for string.\n";
        return 1;
    }

    cout << "You have entered:\n";
    cout << "Number: " << x << endl;
    cout << "String: " << str << endl;

    return 0;
}
