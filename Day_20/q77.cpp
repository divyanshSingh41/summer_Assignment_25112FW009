// Write a program to Multiply matrices.

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    int matrix1[r1][c1];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    int matrix2[r2][c2];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> matrix2[i][j];
        }
    }

    int result[r1][c2] = {0};

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}