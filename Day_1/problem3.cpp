// Write a program to Find factorial of a number.
#include <iostream>
using namespace std;

// By Recursion
// Space Complexity = O(n)
// Time Complexity = O(n)
long long factorial(long long n){
    if(n==0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    long long n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
        return 0;
    }

    // Time Complexity --> O(n)
    // Space Complexity --> O(1)
    long long fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    cout << "Factorial using loop = " << fact << '\n';
    cout << "Factorial using recursion = "<< factorial(n) << '\n';
    return 0;
}