/* Name: Angel Mora
 * Instructor: Professor Vaughn
 * Date: 4/25/26
 * Course: MCSCI-272
 * Lab: Vectors Challenge 1
 * Purpose: This application provides utilities for retrieving day and month
 * names based on numeric input using global const string arrays and robust
 * input validation */
#include <iostream>
#include <string>
#include<limits>

using namespace std;

const string DAYS_OF_WEEK[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

const string MONTHS_OF_YEAR[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    int choice = 0;

    do {
        cout << "\n===== DATE UTILITIES MENU =====\n";
        cout << "1. Get Day Name by Number (1-7)\n";
        cout << "2. Get Month Name by Number (1-12)\n";
        cout << "3. Quit\n";
        cout << "Choice: ";

        if (!(cin >> choice)) {
            cout << "Error: Please enter a numeric value.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                int dayNum;
                cout << "Enter a day number (1-7): ";

                if (!(cin >> dayNum)) {
                    cout << "Invalid input. Please enter a number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else if (dayNum >= 1 && dayNum <= 7) {
                    cout << "Day " << dayNum << " is " << DAYS_OF_WEEK[dayNum - 1] << ".\n";
                } else {
                    cout << "Invalid Day (Must be between 1-7).\n";
                }
                break;
            }

            case 2: {
                int monthNum;
                cout << "Enter a month number (1-12): ";

                if (!(cin >> monthNum)) {
                    cout << "Invalid input. Please enter a number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else if (monthNum >= 1 && monthNum <= 12) {
                    // Tip: Indexing (monthNum - 1)
                    cout << "Month " << monthNum << " is " << MONTHS_OF_YEAR[monthNum - 1] << ".\n";
                } else {
                    cout << "Invalid Month (Must be between 1-12).\n";
                }
                break;
            }

            case 3:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid selection. Please choose 1, 2, or 3.\n";
                break;
        }

    } while (choice != 3);

    return 0;
}