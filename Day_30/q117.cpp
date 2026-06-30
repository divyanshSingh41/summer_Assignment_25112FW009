// Write a program to Create student record system using arrays and strings.

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int rollNo[MAX];
    string name[MAX];
    string course[MAX];
    float marks[MAX];

    int n = 0;
    int choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (n >= MAX) {
                cout << "Record limit reached!\n";
            } else {
                cout << "\nEnter Roll Number: ";
                cin >> rollNo[n];

                cin.ignore(); // clears input buffer

                cout << "Enter Student Name: ";
                getline(cin, name[n]);

                cout << "Enter Course: ";
                getline(cin, course[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;

                cout << "Student record added successfully!\n";
            }
        }

        else if (choice == 2) {
            if (n == 0) {
                cout << "\nNo records found.\n";
            } else {
                cout << "\n===== All Student Records =====\n";

                for (int i = 0; i < n; i++) {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "Roll Number: " << rollNo[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Course: " << course[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                }
            }
        }

        else if (choice == 3) {
            if (n == 0) {
                cout << "\nNo records available to search.\n";
            } else {
                int searchRoll;
                bool found = false;

                cout << "\nEnter Roll Number to Search: ";
                cin >> searchRoll;

                for (int i = 0; i < n; i++) {
                    if (rollNo[i] == searchRoll) {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number: " << rollNo[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Course: " << course[i] << endl;
                        cout << "Marks: " << marks[i] << endl;

                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student record not found.\n";
                }
            }
        }

        else if (choice == 4) {
            cout << "\nExiting program...\n";
        }

        else {
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}