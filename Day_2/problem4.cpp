// Write a program to Check whether a number is palindrome.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;

    int original = n; 
    int reverse = 0;

    while(n > 0){
        int ld = n % 10; 
        reverse = reverse * 10 + ld; 
        n = n/10; 
    }

    if (original == reverse) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }
    
    return 0;
}