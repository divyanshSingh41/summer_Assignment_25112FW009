// Write a program to Reverse a number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;

    int reverse = 0;
    while(n > 0){
        int ld = n % 10;
        reverse = reverse * 10 + ld;
        n = n/10;
    }
    cout<<"Reverse of "<<n<<" is: "<<reverse<<endl;
    return 0;
}