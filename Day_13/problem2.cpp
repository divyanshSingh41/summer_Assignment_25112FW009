// Write a program to Find sum and average of array.
#include <iostream>
using namespace std;   

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "The sum of the array is: " << sum << endl;
    cout << "The average of the array is: " << average << endl;

    return 0;
}
