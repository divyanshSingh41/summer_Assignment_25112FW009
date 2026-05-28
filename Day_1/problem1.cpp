// Write a program to Calculate sum of first N natural numbers.
#include <iostream>
using namespace std;

int main(){
    long long n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a natural number" << endl;
        return 0;
    }

    // O(n) approach
    long long sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout<<"The sum of first " << n <<" natural numbers is: " << sum <<endl;

    //Optimized Version --> O(1)
    long long Sum = n * (n+1)/2;
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
    
}