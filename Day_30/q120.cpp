// Write a program to Develop complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int rollNo[MAX];
string name[MAX];
string course[MAX];
float marks[MAX];

int totalStudents = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void showMenu();

int main() {
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nExiting program...\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}

// Function to show menu
void showMenu() {
    cout << "\n========== Student Management System ==========\n";
    cout << "1. Add Student Record\n";
    cout << "2. Display All Student Records\n";
    cout << "3. Search Student Record\n";
    cout << "4. Update Student Record\n";
    cout << "5. Delete Student Record\n";
    cout << "6. Exit\n";
    cout << "===============================================\n";
}

// Function to add student
void addStudent() {
    if (totalStudents >= MAX) {
        cout << "\nRecord limit reached!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> rollNo[totalStudents];

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Course Name: ";
    getline(cin, course[totalStudents]);

    cout << "Enter Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;

    cout << "\nStudent record added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if (totalStudents == 0) {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n========== All Student Records ==========\n";

    for (int i = 0; i < totalStudents; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number: " << rollNo[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Course: " << course[i] << endl;
        cout << "Marks: " << marks[i] << endl;
    }
}

// Function to search student by roll number
void searchStudent() {
    if (totalStudents == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> searchRoll;

    for (int i = 0; i < totalStudents; i++) {
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
        cout << "\nStudent record not found.\n";
    }
}

// Function to update student record
void updateStudent() {
    if (totalStudents == 0) {
        cout << "\nNo records available to update.\n";
        return;
    }

    int updateRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Update: ";
    cin >> updateRoll;

    for (int i = 0; i < totalStudents; i++) {
        if (rollNo[i] == updateRoll) {
            cout << "\nEnter New Details\n";

            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Course: ";
            getline(cin, course[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "\nStudent record updated successfully!\n";

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent record not found.\n";
    }
}

// Function to delete student record
void deleteStudent() {
    if (totalStudents == 0) {
        cout << "\nNo records available to delete.\n";
        return;
    }

    int deleteRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> deleteRoll;

    for (int i = 0; i < totalStudents; i++) {
        if (rollNo[i] == deleteRoll) {
            for (int j = i; j < totalStudents - 1; j++) {
                rollNo[j] = rollNo[j + 1];
                name[j] = name[j + 1];
                course[j] = course[j + 1];
                marks[j] = marks[j + 1];
            }

            totalStudents--;

            cout << "\nStudent record deleted successfully!\n";

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent record not found.\n";
    }
}