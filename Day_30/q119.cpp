// Write a program to Create mini employee management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int empId[MAX];
    string empName[MAX];
    string department[MAX];
    string designation[MAX];
    float salary[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count >= MAX) {
                cout << "\nEmployee record limit reached!\n";
            } else {
                cout << "\nEnter Employee ID: ";
                cin >> empId[count];

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[count]);

                cout << "Enter Department: ";
                getline(cin, department[count]);

                cout << "Enter Designation: ";
                getline(cin, designation[count]);

                cout << "Enter Salary: ";
                cin >> salary[count];

                count++;

                cout << "\nEmployee added successfully!\n";
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "\nNo employee records found.\n";
            } else {
                cout << "\n===== All Employee Records =====\n";

                for (int i = 0; i < count; i++) {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "Employee ID: " << empId[i] << endl;
                    cout << "Name: " << empName[i] << endl;
                    cout << "Department: " << department[i] << endl;
                    cout << "Designation: " << designation[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                }
            }
        }

        else if (choice == 3) {
            int searchId;
            bool found = false;

            cout << "\nEnter Employee ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++) {
                if (empId[i] == searchId) {
                    cout << "\nEmployee Found!\n";
                    cout << "Employee ID: " << empId[i] << endl;
                    cout << "Name: " << empName[i] << endl;
                    cout << "Department: " << department[i] << endl;
                    cout << "Designation: " << designation[i] << endl;
                    cout << "Salary: " << salary[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nEmployee not found.\n";
            }
        }

        else if (choice == 4) {
            int updateId;
            bool found = false;

            cout << "\nEnter Employee ID to Update Salary: ";
            cin >> updateId;

            for (int i = 0; i < count; i++) {
                if (empId[i] == updateId) {
                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "\nSalary updated successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nEmployee not found.\n";
            }
        }

        else if (choice == 5) {
            int deleteId;
            bool found = false;

            cout << "\nEnter Employee ID to Delete: ";
            cin >> deleteId;

            for (int i = 0; i < count; i++) {
                if (empId[i] == deleteId) {
                    for (int j = i; j < count - 1; j++) {
                        empId[j] = empId[j + 1];
                        empName[j] = empName[j + 1];
                        department[j] = department[j + 1];
                        designation[j] = designation[j + 1];
                        salary[j] = salary[j + 1];
                    }

                    count--;
                    cout << "\nEmployee deleted successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nEmployee not found.\n";
            }
        }

        else if (choice == 6) {
            cout << "\nExiting Employee Management System...\n";
        }

        else {
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}