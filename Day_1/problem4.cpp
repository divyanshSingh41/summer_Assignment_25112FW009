// Write a program to Count digits in a number.
#include <iostream>
using namespace std;

int main(){
    long long n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    if (n < 0) {
        n = -n; // Make n positive if it's negative
    }

    // O(d) approach where d is the number of digits in n
    int count = 0;
    do {
        count++;
        n /= 10; // Remove the last digit
    } while (n > 0);

    cout << "The number of digits is: " << count << endl;
    return 0;
}