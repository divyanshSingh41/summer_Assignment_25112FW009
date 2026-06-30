// Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std; 

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum Element\n";
        cout << "3. Find Minimum Element\n";
        cout << "4. Calculate Sum\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (int i = 0; i < size; ++i) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 2: {
                int maxElement = arr[0];
                for (int i = 1; i < size; ++i) {
                    if (arr[i] > maxElement) {
                        maxElement = arr[i];
                    }
                }
                cout << "Maximum Element: " << maxElement << endl;
                break;
            }
            case 3: {
                int minElement = arr[0];
                for (int i = 1; i < size; ++i) {
                    if (arr[i] < minElement) {
                        minElement = arr[i];
                    }
                }
                cout << "Minimum Element: " << minElement << endl;
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 0; i < size; ++i) {
                    sum += arr[i];
                }
                cout << "Sum of Elements: " << sum << endl;
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    delete[] arr;
    return 0;
}




