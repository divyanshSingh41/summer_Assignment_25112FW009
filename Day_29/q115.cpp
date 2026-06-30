// Write a program to Create menu-driven string operations system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;
            case 2:
                cout << "Length of String: " << str.length() << endl;
                break;
            case 3:
                for (int i = 0; i < str.length(); ++i) {
                    str[i] = toupper(str[i]);
                }
                cout << "String in Uppercase: " << str << endl;
                break;
            case 4:
                for (int i = 0; i < str.length(); ++i) {
                    str[i] = tolower(str[i]);
                }
                cout << "String in Lowercase: " << str << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
