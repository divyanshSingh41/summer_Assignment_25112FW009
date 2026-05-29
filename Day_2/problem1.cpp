// Write a program to Find sum of digits of a number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;

    // Time complexity --> O(log10​n)
    int sum = 0;
    while(n>0){
        int ld = n%10;
        sum += ld;
        n = n/10;
    }
    cout<<"Sum of digits of a given number is: "<< sum <<endl;
    return 0;
}