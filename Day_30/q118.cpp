// Write a program to Create mini library system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int bookId[MAX];
    string bookName[MAX];
    string authorName[MAX];
    int quantity[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count >= MAX) {
                cout << "\nLibrary is full!\n";
            } else {
                cout << "\nEnter Book ID: ";
                cin >> bookId[count];

                cin.ignore();

                cout << "Enter Book Name: ";
                getline(cin, bookName[count]);

                cout << "Enter Author Name: ";
                getline(cin, authorName[count]);

                cout << "Enter Quantity: ";
                cin >> quantity[count];

                count++;

                cout << "\nBook added successfully!\n";
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "\nNo books available.\n";
            } else {
                cout << "\n===== All Books =====\n";

                for (int i = 0; i < count; i++) {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "Book ID: " << bookId[i] << endl;
                    cout << "Book Name: " << bookName[i] << endl;
                    cout << "Author Name: " << authorName[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                }
            }
        }

        else if (choice == 3) {
            int searchId;
            bool found = false;

            cout << "\nEnter Book ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++) {
                if (bookId[i] == searchId) {
                    cout << "\nBook Found!\n";
                    cout << "Book ID: " << bookId[i] << endl;
                    cout << "Book Name: " << bookName[i] << endl;
                    cout << "Author Name: " << authorName[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nBook not found.\n";
            }
        }

        else if (choice == 4) {
            int issueId;
            bool found = false;

            cout << "\nEnter Book ID to Issue: ";
            cin >> issueId;

            for (int i = 0; i < count; i++) {
                if (bookId[i] == issueId) {
                    found = true;

                    if (quantity[i] > 0) {
                        quantity[i]--;
                        cout << "\nBook issued successfully!\n";
                    } else {
                        cout << "\nBook is not available right now.\n";
                    }

                    break;
                }
            }

            if (!found) {
                cout << "\nBook not found.\n";
            }
        }

        else if (choice == 5) {
            int returnId;
            bool found = false;

            cout << "\nEnter Book ID to Return: ";
            cin >> returnId;

            for (int i = 0; i < count; i++) {
                if (bookId[i] == returnId) {
                    quantity[i]++;
                    cout << "\nBook returned successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nBook not found.\n";
            }
        }

        else if (choice == 6) {
            cout << "\nExiting Library System...\n";
        }

        else {
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}