// Write a program to Create student record management system.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    string grade;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "Student Record Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student newStudent;
                cout << "Enter student name: ";
                cin >> newStudent.name;
                cout << "Enter student age: ";
                cin >> newStudent.age;
                cout << "Enter student grade: ";
                cin >> newStudent.grade;
                students.push_back(newStudent);
                break;
            }
            case 2: {
                cout << "\nStudent Records:" << endl;
                for (const auto& student : students) {
                    cout << "Name: " << student.name 
                         << ", Age: " << student.age 
                         << ", Grade: " << student.grade << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}