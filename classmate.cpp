/**
* Name: Raymond Zhang
* Program Name: Code a Classmate's Program
* Date: 9/24/24
* Extra: None required
*/

#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "What grade did you receive on your assignment?" << endl;
    cin >> grade; /* Takes an integer input from the user. */
    if (grade < 60) { /* Checks if the integer entered is any integer less than 60. */
        cout << "You got an F." << endl;
    }
    else if (grade >= 60 && grade <= 63) {
        cout << "You got a D-." << endl;
    }
    else if (grade >= 63 && grade <= 66) {
        cout << "You got a D." << endl;
    }
    else if (grade >= 67 && grade <= 69) {
        cout << "You got a D+." << endl;
    }
    else if (grade >= 70 && grade <= 72) {
        cout << "You got a C-." << endl;
    }
    else if (grade >= 73 && grade <= 76) {
        cout << "You got a C." << endl;
    }
    else if (grade >= 77 && grade <= 79) {
        cout << "You got a C+." << endl;
    }
    else if (grade >= 80 && grade <= 82) {
        cout << "You got a B-." << endl;
    }
    else if (grade >= 83 && grade <= 86) {
        cout << "You got a B." << endl;
    }
    else if (grade >= 87 && grade <= 89) {
        cout << "You got a B+." << endl;
    }
    else if (grade >= 90 && grade <= 93) {
        cout << "You got a A-." << endl;
    }
    else if (grade >= 94 && grade <= 96) {
        cout << "You got a A." << endl;
    }
    else { /* Checks if the integer entered by the user is anything greater than 96, as all other numbers before have been checked. */
        cout << "You got a A+." << endl;
    }
}
